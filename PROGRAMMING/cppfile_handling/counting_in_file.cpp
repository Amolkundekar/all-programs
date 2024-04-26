#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    ifstream inputFile("test.txt"); // Open the text file

    if (inputFile.is_open())
    {
        string line;
        int wordCount = 0, char_count = 0, line_count= 0;

        while (getline(inputFile, line))
        {
            //split string 
            stringstream ss(line);
            string word;

            line_count++;

            while (ss >> word)
            {
                wordCount++;
            }

            for (char c : line)
            {
                char_count++;
            }
        }

        inputFile.close();

        cout << "Number of words in the said file: " << wordCount << std::endl;
        cout << "Number of characters in the said file: " << char_count << std::endl;
        cout << "Number of line in the said file: " << line_count << std::endl;
    }
    else
    {
        cout << "Failed to open the file." << endl;
    }

    return 0;
}