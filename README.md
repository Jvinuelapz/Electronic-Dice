# Electronic Dice with ATmega328P

This repository documents a complete engineering design cycle for a multi-sided electronic dice. The project covers the entire development process, from initial problem definition and component research to detailed schematic design, PCB layout, software development, and 3D enclosure modeling. While a physical prototype was not assembled, all engineering stages for a production-ready device were completed.

The final design is a compact, key-fob-sized device featuring a rechargeable LiPo battery, USB-C charging, and a dual 7-segment display.

📄 **[Read the full project report (PDF)](./Wildlife%20Detection%20using%20Deep%20Learning.pdf)**

---

## ✨ Key Features

* **Multi-Sided Dice:** Supports d4, d6, d8, d10, d12, and d20 dice types, selectable via a tactile button.
* **Compact Design:** The final PCB measures just 38 x 48 mm.
* **Clear Display:** Utilizes two 7-segment displays with multiplexing to clearly show roll results.
* **Rechargeable:** Powered by a 150mAh LiPo battery with on-board USB charging via a TP4057 IC.
* **Power Management:** Includes an LM2731 step-up voltage regulator to provide a stable 5V supply to all components.

---

## ⚙️ The Engineering Process

To run this project on your local machine, please follow these steps:

1.  **Clone the repository:**
    ```bash
    git clone [https://github.com/your-username/Wildlife_detection_DL.git](https://github.com/your-username/Wildlife_detection_DL.git)
    cd Wildlife_detection_DL
    ```

2.  **Create a virtual environment (recommended):**
    ```bash
    python -m venv venv
    source venv/bin/activate  # On Windows, use: venv\Scripts\activate
    ```

3.  **Install the dependencies:**
    All the necessary libraries are listed in the `requirements.txt` file.
    ```bash
    pip install -r requirements.txt
    ```

---

## 🗂️ Repository Structure

- `Wildlife Detection using Deep Learning.pdf`: The detailed project report.
- `Data_Exploration.ipynb`: Notebook for exploring and visualizing the dataset.
- `Data_Augmentation.ipynb`: Notebook that implements the data augmentation techniques.
- `Model_Training_and_evaluation.ipynb`: The main notebook for training and evaluating the YOLOv8 models and visualizing the results.
- `requirements.txt`: A list of the required Python dependencies.
- `.gitignore`: A file to ignore unnecessary files and directories.
