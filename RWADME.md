<!-- <div style="width: 100%;">
    <a href="#"><img src="https://raw.githubusercontent.com/ferasaljoudi/AssetsRepository/main/SVGsHeader/ElevatorControlSystem.svg" alt="Elevator Control System" style="width: 100%"></a>
</div>
<br> -->

This project was a lab project for ENSE 452 class

<br>
<div style="width: 100%;">
    <a href="#"><img src="https://raw.githubusercontent.com/ferasaljoudi/AssetsRepository/main/BrownSVGs/description.svg" alt="Description" style="width: 100%"></a>
</div>
<br>

The goal of this project is to design an elevator control system using the STM32 Cortex-M3 board with FreeRTOS and hardware interrupts. The system includes a CLI for user interaction to control elevator operations such as floor selection, door opening, door closing, and maintenance mode activation.

<!-- <br>
<div style="width: 100%;">
    <a href="#"><img src="https://raw.githubusercontent.com/ferasaljoudi/AssetsRepository/main/BrownSVGs/objectives.svg" alt="Objectives" style="width: 100%"></a>
</div>
<br> -->

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
<br>
