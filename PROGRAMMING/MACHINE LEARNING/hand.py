import cv2
import numpy as np

# Create a VideoCapture object to capture video from your webcam (0 is typically the default camera)
cap = cv2.VideoCapture(0)

while True:
    ret, frame = cap.read()
    if not ret:
        break

    # Convert the frame to grayscale for better edge detection
    gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)

    # Apply Gaussian blur to reduce noise and improve edge detection
    gray = cv2.GaussianBlur(gray, (15, 15), 0)

    # Use Canny edge detection to find edges in the frame
    edges = cv2.Canny(gray, 30, 100)

    # Find contours in the edges
    contours, _ = cv2.findContours(edges, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)

    # Filter and draw the largest contour (assuming it's the hand)
    if contours:
        max_contour = max(contours, key=cv2.contourArea)
        cv2.drawContours(frame, [max_contour], 0, (0, 255, 0), 2)

        # Determine if the hand is making a "thumbs up" or "thumbs down" gesture
        epsilon = 0.03 * cv2.arcLength(max_contour, True)
        approx = cv2.approxPolyDP(max_contour, epsilon, True)
        if len(approx) == 4:
            cv2.putText(frame, "Thumbs Up (Okay)", (10, 30), cv2.FONT_HERSHEY_SIMPLEX, 1, (0, 255, 0), 2)
        else:
            cv2.putText(frame, "Thumbs Down (Not Okay)", (10, 30), cv2.FONT_HERSHEY_SIMPLEX, 1, (0, 0, 255), 2)

    # Display the frame with the detected hand contour and gesture recognition
    cv2.imshow("Hand Detection", frame)

    # Exit the loop by pressing 'q'
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

# Release the video capture and close OpenCV windows
cap.release()
cv2.destroyAllWindows()
