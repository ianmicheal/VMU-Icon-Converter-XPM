# VMU Icon Converter

Ian micheal
I wrote this in C and using normal bmp format no stuffing around easy to use tool..

This tool converts a 48x32 pixel BMP image into a VMU icon format compatible with Dreamcast VMU (Visual Memory Unit) icons. It generates a C header file containing the icon data in XPM format.

## Features

- ✨ Converts 48x32 BMP images to VMU icon format
- 📄 Generates a C header file (`vmu_icon.h`) with the icon data
- 🚀 Simple batch file for easy conversion

## Requirements

- 🖥️ Windows operating system
- 🖼️ A 48x32 pixel BMP image file named `input_file.bmp`
- 🛠️ The `vmuxpm.exe` executable (provided in this repository)

## Usage

1. Clone or download this repository to your local machine.
2. Place your 48x32 pixel BMP image in the same directory as the batch file and rename it to `input_file.bmp`.
3. Ensure `vmuxpm.exe` is in the same directory.
4. Run the `convert_to_vmu_icon.bat` batch file by double-clicking it or executing it from the command line.
5. If successful, a `vmu_icon.h` file will be generated in the same directory.

## File Descriptions

| File | Description |
|------|-------------|
| `vmuxpm.exe` | The executable that performs the conversion |
| `convert_to_vmu_icon.bat` | Batch file to automate the conversion process |
| `input_file.bmp` | Your input 48x32 pixel BMP image (you need to provide this) |
| `vmu_icon.h` | The output file containing the VMU icon data in XPM format (generated after running the batch file) |

## How It Works

The converter reads the input BMP file and converts it into a black and white image suitable for VMU display. It then generates a C header file with the image data in XPM format, which can be easily included in Dreamcast development projects.

## Troubleshooting

- ✅ Make sure your input image is exactly 48x32 pixels and in BMP format.
- ✅ Ensure all files (`vmuxpm.exe`, `input_file.bmp`, and the batch file) are in the same directory.
- ✅ If you encounter any errors, check the console output for specific error messages.

## Contributing

Contributions to improve the converter are welcome. Please feel free to submit pull requests or open issues for any bugs or enhancements.

## License

 MIT License

## Acknowledgements

This tool uses the [STB image library](https://github.com/nothings/stb) for image processing.

---

<p align="center">
  Made with ❤️ for Dreamcast developers
</p>
