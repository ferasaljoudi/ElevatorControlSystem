<div style="width: 100%;">
    <a href="#"><img src="https://raw.githubusercontent.com/ferasaljoudi/AssetsRepository/main/SVGsHeader/elevatorControlSystem.svg" alt="Elevator Control System" style="width: 100%"></a>
</div>
<br>

<div align="center">

This project was a lab assignment for ENSE 452 class

</div>

<br>
<div style="width: 100%;">
    <a href="#"><img src="https://raw.githubusercontent.com/ferasaljoudi/AssetsRepository/main/BrownSVGs/description.svg" alt="Description" style="width: 100%"></a>
</div>
<br>

The goal of this project is to design an elevator control system using the STM32 Cortex-M3 board with FreeRTOS and hardware interrupts. The system includes a CLI for user interaction to control elevator operations such as floor selection, door opening, door closing, and maintenance mode activation.

<br>
<div style="width: 100%;">
    <a href="#"><img src="https://raw.githubusercontent.com/ferasaljoudi/AssetsRepository/main/BrownSVGs/technologiesUsed.svg" alt="Technologies Used" style="width: 100%"></a>
</div>
<br>

<div align="center">
<table>
  <tr>
    <td>
        <a href="https://www.w3schools.com/c/"><img src="https://raw.githubusercontent.com/ferasaljoudi/AssetsRepository/main/Badges/Languages/Left/c.svg" alt="C"></a>
    </td>
    <td>
        <a href="https://www.st.com/en/microcontrollers-microprocessors/stm32f1-series.html"><img src="https://raw.githubusercontent.com/ferasaljoudi/AssetsRepository/main/Badges/Hardware/Left/stm32.svg" alt="Stm32"></a>
    </td>
    <td>
        <a href="https://www.st.com/en/development-tools/stm32cubeide.html"><img src="https://raw.githubusercontent.com/ferasaljoudi/AssetsRepository/main/Badges/ToolsAndPlatforms/Right/stm32Cube.svg" alt="STM32Cube"></a>
    </td>
  </tr>
</table>
</div>

<br>
<div style="width: 100%;">
    <a href="#"><img src="https://raw.githubusercontent.com/ferasaljoudi/AssetsRepository/main/BrownSVGs/objectives.svg" alt="Objectives" style="width: 100%"></a>
</div>
<br>

- Using the STM32 Cortex-M3 hardware peripherals (GPIO, USART2, Timer2).
- Implement a multitasking environment with FreeRTOS.
- Enable inter-task and ISR-task communication via FreeRTOS queues.
- Provide a user-friendly CLI for runtime control and testing.

<br>
<div style="width: 100%;">
    <a href="#"><img src="https://raw.githubusercontent.com/ferasaljoudi/AssetsRepository/main/BrownSVGs/features.svg" alt="Features" style="width: 100%"></a>
</div>
<br>

<b>1. CLI Commands:</b>

- `1`, `2`, `3`, `4`: Select floors.
- `o`, `c`: Open and close doors.
- `M`: Activate maintenance mode.

<b>2. Tasks:</b>

- `StatusWindowTask` Increase the time per seconds and update the status window (Top side of terminal).
- `ProcessUserInputTask` Handles user input via CLI.
- `StartDefaultTask` Manages emergency button states.

<b>3. Interrupts:</b>

- `Emergency Button` Triggered by EXTI0_IRQHandler to enter emergency mode.
- `UART Communication` Processes user commands.

<br>
<div style="width: 100%;">
    <a href="#"><img src="https://raw.githubusercontent.com/ferasaljoudi/AssetsRepository/main/BrownSVGs/resources.svg" alt="Resources" style="width: 100%"></a>
</div>

### [Milestone.pdf](./Milestone.pdf) outlines the completed work in the first phase and future tasks for the final phase.

### [ElevatorProject.pdf](./ElevatorProject.pdf) outlines the completed work in the final phase.