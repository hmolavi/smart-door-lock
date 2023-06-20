<br />
<div align="center">
  <a href="https://github.com/github_username/repo_name">
    <img src="assets/logo.png" alt="Logo" height="175">  
  </a>

<h3 align="center">Smart Door Lock</h3>
  <p align="center">
      Secure access control using your face!
    <br />
  </p>
</div>
<div align="center">
</div>

----
## Active Face Recognition 
The program recognizes and compares the face with the 'reference.jpg' file and indicates if person is matching or not.

<div style="display: flex"; align="center">
  <img src="assets/match.png" alt="Match" style="height: 200px; flex: 1;" />
  <img src="assets/no_match.png" alt="No Match" style="height: 200px; flex: 1;" />
</div>

## Arduino Controlled Stepper Motor
A stepper motor is responsible for unlocking and locking the door which is controlled by the Arduino input. Serial connection to Arduino allows for Python program to communicate if person is allowed to enter or not.

# Getting Started

To begin you must first download some external libraries which can be done by excecuting the following into your windows command prompt
``` bash
pip install opencv-python serial mediapipe pyserial deepface
```
Afterwards follow these instructions:
1. Install all of the files via zip folder
2. Connect your Arduino to your computer and upload the `Receiver.ino` file to it
3. Connect the stepper motor to pin 9 on the Ardiuno
4. Upload the reference.jpg image to the same folder
5. Execute `main.py` file

## Roadmap
- [x] Import libraries and initiate OpenCV
- [x] Create reference profile
- [x] Confirm face recognition working as intended
- [x] Connect arduino and install neccesary libraries
- [x] Transmit message across Serial COM port
- [x] Write Arduino code to accomodate stepper motor
- [ ] Create a door bell and only search for faces when door bell is rung
     
## Contributing
Contributions are what make the open source community such an amazing place to learn, inspire, and create. Any contributions you make are **greatly appreciated**.

If you have a suggestion that would make this better, please fork the repo and create a pull request. You can also simply open an issue with the tag "enhancement".
Don't forget to give the project a star! Thanks again!

1. Fork the Project
2. Create your Feature Branch (`git checkout -b feature/AmazingFeature`)
3. Commit your Changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the Branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request

----
