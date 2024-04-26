"""
Created on Wed Jul 26 10:34:50 2023

@author: Deepak
"""
#Importing Libraries
import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
import seaborn as sns
import warnings
warnings.filterwarnings("ignore")

#import Dataset
df=pd.read_csv("Iris.csv")

# Simple MinMax 
from sklearn.preprocessing import MinMaxScaler
scaler = MinMaxScaler()
df = pd.DataFrame({'WEIGHT': [15, 18, 12,10],
                   'PRICE': [1,3,2,5]},
                   index = ['Orange','Apple','Banana','Grape'])
df1 = pd.DataFrame(scaler.fit_transform(df),
                   columns=['WEIGHT','PRICE'],
                   index = ['Orange','Apple','Banana','Grape'])

ax = df.plot.scatter(x='WEIGHT', y='PRICE',color=['red','green','blue','yellow'], 
                     marker = '*',s=80, label='BREFORE SCALING');
df1.plot.scatter(x='WEIGHT', y='PRICE', color=['red','green','blue','yellow'],
                 marker = 'o',s=60,label='AFTER SCALING', ax = ax);
plt.axhline(0, color='red',alpha=0.2)
plt.axvline(0, color='red',alpha=0.2);

# Applying MinMaxScaler on our dataset
df=pd.read_csv("Iris.csv")
df.drop("Species",axis=1,inplace=True)
from sklearn.preprocessing import MinMaxScaler
scaler=MinMaxScaler()
df1=pd.DataFrame(scaler.fit_transform(df),columns=['Id', 'SepalLengthCm', 'SepalWidthCm', 'PetalLengthCm', 'PetalWidthCm'])
ax=df.plot.scatter(x="SepalLengthCm",y="SepalWidthCm",marker="*",label="Before-Scaling",color="red")
df1.plot.scatter(x="SepalLengthCm",y="SepalWidthCm",marker="+",label="After-Scaling",ax=ax)
plt.axhline(0, color='red',alpha=0.2)
plt.axvline(0, color='red',alpha=0.2);
plt.show()

#Simple StandardScaler
from sklearn.preprocessing import StandardScaler
standardscaler=StandardScaler()
df = pd.DataFrame({'WEIGHT': [15, 18, 12,10],
                   'PRICE': [1,3,2,5]},
                   index = ['Orange','Apple','Banana','Grape'])
df1=pd.DataFrame(scaler.fit_transform(df),columns=['WEIGHT', 'PRICE'],index = ['Orange','Apple','Banana','Grape'])

ax=df.plot.scatter(x="WEIGHT",y="PRICE",marker="*",s=60,label="Before Scaling",color="red")
df1.plot.scatter(x="WEIGHT",y="PRICE",marker="*",s=60,label="After Scaling",ax=ax)
plt.axhline(0, color='red',alpha=0.2)
plt.axvline(0, color='red',alpha=0.2);

#Applying StandardScaler on Dataset
df=pd.read_csv("Iris.csv")
df.drop("Species",axis=1,inplace=True)
from sklearn.preprocessing import StandardScaler
scaler=StandardScaler()
df1=pd.DataFrame(scaler.fit_transform(df),columns=['Id', 'SepalLengthCm', 'SepalWidthCm', 'PetalLengthCm', 'PetalWidthCm'])
ax=df.plot.scatter(x="SepalLengthCm",y="SepalWidthCm",marker="*",label="Before-Scaling",color="red")
df1.plot.scatter(x="SepalLengthCm",y="SepalWidthCm",marker="+",label="After-Scaling",ax=ax)
plt.axhline(0, color='red',alpha=0.2)
plt.axvline(0, color='red',alpha=0.2);
plt.show()