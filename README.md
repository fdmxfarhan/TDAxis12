# TDAxis12 Arduino Library

An Arduino library for interfacing with the **TDAxis12 compass sensor** and reading angle data in embedded projects.

## Features

- Read angle data from the TDAxis12 sensor.
- Integrate compass measurements into Arduino-based projects.
- Organize sensor communication through a reusable library.
- Keep application code clean and easy to maintain.

## Installation

### Arduino IDE

1. Download or clone this repository:
   ```bash
   git clone https://github.com/fdmxfarhan/TDAxis12.git
   ```
2. If necessary, package the `TDAxis12` folder as a ZIP file.
3. Open Arduino IDE.
4. Select **Sketch → Include Library → Add .ZIP Library...**.
5. Select the ZIP file containing the library.
6. Include the library in your sketch.

### Manual installation

1. Download the repository using **Code → Download ZIP**.
2. Extract the archive.
3. Copy the library folder into your Arduino libraries directory.

Typical locations:

- **Windows:** `Documents\Arduino\libraries\`
- **Linux:** `~/Arduino/libraries/`

Make sure the final directory structure is correct and that the library files are inside the `TDAxis12` folder.

Restart Arduino IDE after installation if the library does not appear.

## Hardware Setup

Connect the TDAxis12 sensor to a compatible microcontroller according to the sensor module's documentation.

Before powering the sensor, verify:

- Supply voltage compatibility.
- The correct communication interface and pin assignments.
- Required pull-up resistors, if applicable.
- Common ground between the sensor and the microcontroller.

**Note:** Refer to the actual sensor hardware documentation for the pinout and electrical specifications.

## Usage

Include the library in your Arduino sketch:

```cpp
#include <TDAxis12.h>
```

The exact initialization and angle-reading calls depend on the API implemented in this library. Refer to the example sketches in the [`examples`](https://github.com/fdmxfarhan/TDAxis12/tree/main/examples) directory for working code.

A typical application follows this workflow:

1. Initialize the communication interface required by the sensor.
2. Create and initialize the TDAxis12 driver.
3. Read the angle measurement.
4. Use the measured angle in your application.

## Applications

The TDAxis12 library can be used in projects that need compass angle measurements, such as:

- Mobile robots and navigation systems.
- Robot heading estimation.
- Direction control and orientation tracking.
- Embedded systems that use compass measurements.

The accuracy of the final heading depends on sensor calibration, installation orientation, magnetic interference, and the sensor's specifications.

## Troubleshooting

| Problem | What to check |
|---|---|
| Library not found | Verify the installation directory and restart Arduino IDE. |
| Sensor does not respond | Check wiring, power, ground, and communication settings. |
| Angle readings are unstable | Check for nearby motors, magnets, steel objects, and electrical interference. |
| Heading is offset | Verify sensor orientation and consult the sensor's calibration procedure. |
| Compilation errors | Confirm that the library version and example code match. |

## Contributing

Contributions, bug reports, and suggestions are welcome. Please open an issue or submit a pull request through the [GitHub repository](https://github.com/fdmxfarhan/TDAxis12).

## License

See the repository's license file for the applicable license terms.

## Author

**Farhan Daemi Mojdehi**

- GitHub: [@fdmxfarhan](https://github.com/fdmxfarhan)
- Repository: [TDAxis12](https://github.com/fdmxfarhan/TDAxis12)
