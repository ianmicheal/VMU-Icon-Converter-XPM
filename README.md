# VMU Icon Converter

This tool converts a 48x32 pixel BMP image into a VMU icon format compatible with Dreamcast VMU (Visual Memory Unit) icons. It generates a C header file containing the icon data in XPM format.

## Features

- ✨ Converts 48x32 BMP images to VMU icon format
- 📄 Generates a C header file (`vmu_icon.h`) with the icon data
- 🚀 Simple batch file for easy conversion

## Requirements

- 🖥️ Windows operating system
- 🖼️ A 48x32 pixel BMP image file named `input_file.bmp` (see BMP File Requirements below)
- 🛠️ The `vmuxpm.exe` executable (provided in this repository)

## BMP File Requirements

To ensure proper conversion, your input BMP file must meet the following specifications:

- 📏 **Dimensions**: Exactly 48 pixels wide by 32 pixels high
- 🎨 **Color Depth**: 24-bit (true color) or 8-bit (256 color)
- 📁 **File Format**: Standard Windows BMP format (uncompressed)
- 🔠 **File Name**: Must be named `input_file.bmp`

**Note**: The converter will transform the image into black and white for VMU display. For best results:
- Use high contrast in your original image
- Avoid complex details that may not render well in black and white
- Test different versions of your icon to find the best VMU representation

## Usage

1. Clone or download this repository to your local machine.
2. Create or prepare your 48x32 pixel BMP image according to the specifications above.
3. Place your BMP image in the same directory as the batch file and rename it to `input_file.bmp`.
4. Ensure `vmuxpm.exe` is in the same directory.
5. Run the `convert_to_vmu_icon.bat` batch file by double-clicking it or executing it from the command line.
6. If successful, a `vmu_icon.h` file will be generated in the same directory.

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

- ✅ Ensure your input image meets all the BMP file requirements listed above.
- ✅ Make sure all files (`vmuxpm.exe`, `input_file.bmp`, and the batch file) are in the same directory.
- ✅ If you encounter any errors, check the console output for specific error messages.
- ✅ If the output icon doesn't look as expected, try adjusting the contrast in your original image and convert again.

## Contributing

Contributions to improve the converter are welcome. Please feel free to submit pull requests or open issues for any bugs or enhancements.

## License

[Specify the license here, e.g., MIT License, GPL, etc.]

## Acknowledgements

This tool uses the [STB image library](https://github.com/nothings/stb) for image processing.

---

<p align="center">
  Made with ❤️ for Dreamcast developers
</p>
