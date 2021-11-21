# SpeedTest

[Arduino](http://arduino.cc) library that calculates average loop duration.

Useful for testing code optimizations.

#### Installation

- Download the most recent version of SpeedTest here: https://github.com/per1234/SpeedTest/archive/main.zip
- **Sketch > Include Library > Add ZIP Library... >** select the downloaded file **> Open**

#### Updating the library

The Arduino IDE can only be used for the initial installation. To update to a new version of the library, you must replace the previous installation manually:

- Download the most recent version of SpeedTest here: https://github.com/per1234/SpeedTest/archive/main.zip
- Delete the previous library installation at **{sketchbook}/libraries/SpeedTest-main**
- Copy the folder, **SpeedTest-main**, from the downloaded .zip file to your **{sketchbook folder}/libraries** folder. You can find the location of your sketchbook folder at **File > Preferences > Sketchbook location**.
- Restart the Arduino IDE if it's running.

<a id="usage"></a>

#### Usage

See the example sketch in **File > Examples > SpeedTest > SpeedTestExample** for demonstration of usage.

##### `SpeedTest.begin(loops)`

Start the test.

- Parameter: **loops** - The number of loops before the test is finished.
  - Type: unsigned long
- Returns: none

##### `SpeedTest.update()`

Call this function on every loop.

- Returns: Whether the test is complete. `false`: Test not complete, `true`: Test complete.
  - Type: bool

##### `SpeedTest.result()`

Call this after `SpeedTest.update()` returns true.

- Returns: The average duration of each loop in microseconds. Note that the SpeedTest library causes some overhead so the result will not be a perfect indicator of the true loop duration without the library but it does give an approximation and is useful for comparisons where the library overhead will have a uniform effect.
  - Type: float

#### Contributing

Pull requests or issue reports are welcome! Please see the [contribution rules](https://github.com/per1234/SpeedTest/blob/main/.github/CONTRIBUTING.md) for instructions.
