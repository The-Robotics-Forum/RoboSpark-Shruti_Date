import cv2


img = cv2.imread(r"C:\Users\hp\Desktop\robospark\IP\text.jpg",cv2.IMREAD_COLOR)
cv2.imshow("color",img)

#GRAYSCALE
gray = cv2.imread("C:\\Users\\hp\\Desktop\\robospark\\IP\\text.jpg",cv2.IMREAD_GRAYSCALE) 
cv2.imshow("gray",gray)
cv2.imwrite("C:/Users/hp/Desktop/robospark/IP/gray.jpg",gray)


print("shape of original image",img.shape)  
print("size of original image",img.size) 


#RESIZE
img1=cv2.resize(img,(400,400))   

cv2.imshow("resize",img1)
cv2.imwrite("C:/Users/hp/Desktop/robospark/IP/resize.jpg",img1)
print(" After resizing",img.shape)  
print("After resizing",img.size)

#THRESH_BINARY
ret,thresh1=cv2.threshold(gray,151,250,cv2.THRESH_BINARY) 
cv2.imshow("binary thresh",thresh1)
cv2.imwrite("C:/Users/hp/Desktop/robospark/IP/binarythresh.jpg",thresh1)

#THRESH_BINARY_INV
ret,thresh2=cv2.threshold(gray,143,223,cv2.THRESH_BINARY_INV)
cv2.imshow("invert thresh",thresh2)
cv2.imwrite("C:/Users/hp/Desktop/robospark/IP/invthresh.jpg",thresh2)

#GAUSSIAN_THRESH
gaus=cv2.adaptiveThreshold(gray,255,cv2.ADAPTIVE_THRESH_GAUSSIAN_C,cv2.THRESH_BINARY,115,2)
cv2.imshow("gaussian thresh",gaus)
cv2.imwrite("C:/Users/hp/Desktop/robospark/IP/gausthresh.jpg",gaus)

#ADAPTIVE_THRESH
mean=cv2.adaptiveThreshold(gray,231,cv2.ADAPTIVE_THRESH_MEAN_C,cv2.THRESH_BINARY,115,2)
cv2.imshow("mean thresh",gaus)
cv2.imwrite("C:/Users/hp/Desktop/robospark/IP/meanthresh.jpg",mean)


cv2.waitKey(5000)
cv2.waitKey(0)
cv2.destroyAllWindows() 