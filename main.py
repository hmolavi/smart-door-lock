import cv2
from cvzone.FaceDetectionModule import FaceDetector
from cvzone.SerialModule import SerialObject

cap = cv2.VideoCapture(2)
detector = FaceDetector()
arduino = SerialObject('/COM3')

while True:
    success, img = cap.read()
    img, faceBoxes = detector.findFaces(img)

    if faceBoxes:
        arduino.sendData([1])
    else:
        arduino.sendData([0])

    cv2.imshow("Video", img)
    cv2.waitKey(1)
