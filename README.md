# Autonomous Vision-Based Landing of a Parrot Mambo Drone on a Moving Platform

This project demonstrates an autonomous UAV landing system developed in MATLAB and Simulink using the Parrot Mambo Minidrone. The drone identifies and lands on a **moving line-follower robot** by processing real-time image data and making flight decisions via onboard visual feedback and a Stateflow-based control strategy.

## 🧠 Project Overview

The system uses a vision-based approach to:
- Detect a uniquely colored platform mounted on a mobile robot using **HSV color segmentation** and **blob analysis**.
- Calculate centroid-based positional errors (`x_error`, `y_error`) to determine the drone’s alignment with the platform.
- Control trajectory and altitude via a **Stateflow controller** managing hover, cruise, and landing phases.
- Gradually descend and perform **precision landing** based solely on real-time onboard visual feedback.

## 💻 Built With

- **MATLAB & Simulink**
- **Image Processing Toolbox**
- **Simulink Coder**
- **Simulink Support Package for Parrot Minidrones**

## 🎯 Key Features

- Robust real-time image processing using HSV segmentation and blob detection.
- Median filter for noise suppression and centroid extraction.
- Proportional lateral control during cruise.
- Smooth, visual-error-based descent controlled by a unified Stateflow chart.
- Fully onboard execution without external ground station.

## 🧰 Requirements

- MATLAB R2021b or later
- Simulink Coder
- Image Processing Toolbox
- Bluetooth-enabled PC
- Parrot Mambo Minidrone with battery and USB Bluetooth dongle

## 🚀 Setup & Deployment

1. Install the **Simulink Support Package for Parrot Minidrones**.
2. Pair the Parrot Mambo via Bluetooth and verify using:
   `parrot_gettingstarted`
3. Open the project in MATLAB:
   `open('MinidroneCompetition.prj')`
4. Build and deploy via **Build, Deploy & Start**.
5. The drone will autonomously detect the moving platform and execute a full mission profile (hover → cruise → descent → land).


## 📸 Test Setup
![image](https://github.com/user-attachments/assets/d4177f21-7071-48c1-9cd6-8215e5f9024a)

- Parrot Mambo Minidrone flying over a black-lined path.
- Red or green-colored landing platform mounted on a line-follower robot.
- Controlled indoor lighting conditions for HSV segmentation.

## 📊 Results
![Untitled video - Made with Clipchamp (1)](https://github.com/user-attachments/assets/71e1abba-8df8-45c5-81d6-b45cfa0d5ac2)
- Accurate detection of the colored platform in indoor environments.
- Stable horizontal tracking and gradual descent under onboard visual guidance.
- Successful precision landings either mid-path or at the end of the line-follower route.
- Confirmed real-time onboard execution without the need for external processing.

## 📍 Limitations & Future Work

- HSV segmentation was sensitive to shadows and reflections under inconsistent lighting.
- Future enhancements may include:
  - Adaptive color thresholding or deep-learning-based detection.
  - Sensor fusion with optical flow or ultrasonic for redundancy.
  - Inter-agent communication for multi-robot coordination.

## 📄 License

This project is licensed under the MIT License.

## 📚 Documentation and Video

For detailed methodology, system architecture, diagrams, and experimental results, please refer to the full [report]() and [demo video]().
