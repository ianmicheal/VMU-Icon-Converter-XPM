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
- 🎨 **Color Mode**: Indexed color (2 colors)
- 🖌️ **Bit Depth**: 8-bit
- 🔢 **Gamma**: Integer
- 📁 **File Format**: Standard Windows BMP format (uncompressed)
- 🔠 **File Name**: Must be named `input_file.bmp`

**Note**: The image should be black and white, where:
- Black pixels will be displayed as on (visible) on the VMU
- White pixels will be displayed as off (invisible) on the VMU

## Usage

1. Clone or download this repository to your local machine.
2. Create or prepare your 48x32 pixel BMP image according to the specifications above. You can use image editing software like GIMP or Photoshop to ensure the correct format.
3. Place your BMP image in the same directory as the batch file and rename it to `input_file.bmp`.
4. Ensure `vmuxpm.exe` is in the same directory.
5. Run the `convert_to_vmu_icon.bat` batch file by double-clicking it or executing it from the command line.
6. If successful, a `vmu_icon.h` file will be generated in the same directory.

## Example Output

Here's an example of what the generated `vmu_icon.h` file might look like:

![VMU Icon Example](data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAPoAAACwCAIAAACItxB4AAAE/0lEQVR4nO3dz2scdxjA8d+sxKWEFBlsRaFmU0LWOAQfTE6BBAzGbA5xqO3WP0aYKI0O8SE5hbgOIbEFDWVz0iKiCpWaTUhKCbJETYIOwcWCOJL1PfidHUZr76M1dX0Y9f3c9JyeHvF5Ps/szO4Oju/7BoA/+7l1AAC3hrgDDhF3wCHiDjhE3AGHiDvgEHEHHCLugEPEHXAo/6nXz87ObjkIgE/53c/OLy1s3uO+E1vz3HNZdXt7e+nSpczPly/fDZ9f2Pi7/fP1cJiVPTjc2NjIYmXR/RfW13vZeLN/bWCpdOvOSBKm/1xZqW5k6zRTUYw22qODRvFRMk6vG5cUo6SV1iea7Qqvdd90/X5UVIy3B1Gj1R4lnVFSGCRFNZtTo6Qk4+54PBoNSy+/9Pqb7/x6cHxcmXtisPBwUO2N03F8Gx0VqmotF03HKY6TtFVrLtf7mZdp+MbCneZ4OCoVCmrmZ3fuXxGR7tHPnfVJPdkqV5plEREplxY/lv5hQ9LFJ7/+Y+vB5nYWqGBmlIRzBxv5wbA3qJ2kpfwkqZQXbWNurlJa6nVrt+83zcy6ZjZL3euzXE+KK61VETlaL4pIVlIb906q5YXxaKc/3e9u/xRdF46IpHvj1q3mw6hQ3+nKnRcPukeRmXXXH38lzYV6q9Sojw4fhvXm/l53+Uhyc/mqLLd7J7nGgkyvHHULYaOzMi9m9vWtcrPXb4pI1Gw99UdfnIXpgm53GXEHMozd8YcI453dXTv9pR7f+WpRFhb3jg9PT++/9ubPnx9ujOO4+XNl7s+o3kpKSqNTlcyOoxHle4ffmJkcb3/8WzdPRrWgEJ+YiVlkZqcb589Py7/l5ZOnPv1irR7JTHsnNhNr5I7s3LPh0+xvIrJQ/1bM+qd9G40K9mhvLyp8bTbtx8Hh42R+dbHR69Tlg51yaTUq51YXJxfjmVW32fOSRObvd2syv7I8rVvjcn6vvdU+r/fE+iNLC4Fa1E/DfLhXbkbjMIpE1HKRjpNcXIgubZlZ/9FCJM6VCmFekuPJ9D3OhXWVkfVHpwedJRtEq+NhfhA1w4MLm3sRFxZxBxwi7oBDxB1wiLgDDhF3wCHiDjhE3AGHLuf3sGJ2nVxN3rjufgdcxLieMnuBPu5k/GbHcGbPcdlTp0HPueqpx/B5qvXg2Z/G7+m1c9VVT7Y+/8/N1Lrfe5z1kcnx9QLBV1X7wFvF7wfAk3E9BRwi7oBDxB1wiLgDDhF3wCHiDjhE3AGHiDvgEHEHHCLugEPEHXCIuAMOEXfAIeIOOETcAYeIO+AQcQccIu6AQ8QdcIi4Aw4Rd8Ah4g44RNwBh4g74BBxBxwi7oBDxB1wiLgDDhF3wCHiDjhE3AGHiDvgEHEHHCLugEPEHXCIuAMOEXfAIeIOOETcAYeIO+AQcQccIu6AQ8QdcIi4Aw4Rd8Ah4g44RNwBh4g74BBxBxwi7oBDxB1wiLgDDhF3wCHiDjhE3AGHiDvgEHEHHCLugEPEHXCIuAMOEXfAIeIOOETcAYeIO+AQcQccIu6AQ8QdcIi4Aw4Rd8Ah4g44RNwBh4g74BBxBxwi7oBDxB1wiLgDDhF3wCHiDjhE3AGHiDvgEHEHHCLugEPEHXCIuAMOEXfAIeIOOETcAYeIO+AQcQccIu6AQ8QdcIi4Aw4Rd8Ch/wENGIzJSNjVQgAAAABJRU5ErkJggg==)

This image shows the XPM format of a converted VMU icon. The `+` symbols represent the visible pixels on the VMU, while the `.` symbols represent the invisible pixels.

## File Descriptions

| File | Description |
|------|-------------|
| `vmuxpm.exe` | The executable that performs the conversion |
| `convert_to_vmu_icon.bat` | Batch file to automate the conversion process |
| `input_file.bmp` | Your input 48x32 pixel BMP image (you need to provide this) |
| `vmu_icon.h` | The output file containing the VMU icon data in XPM format (generated after running the batch file) |

## How It Works

The converter reads the input BMP file, which should already be in a black and white, 2-color indexed format. It then generates a C header file with the image data in XPM format, which can be easily included in Dreamcast development projects.

## Troubleshooting

- ✅ Ensure your input image meets all the BMP file requirements listed above, especially the color mode and bit depth.
- ✅ Use image editing software to confirm your BMP is in 2-color indexed mode with 8-bit depth.
- ✅ Make sure all files (`vmuxpm.exe`, `input_file.bmp`, and the batch file) are in the same directory.
- ✅ If you encounter any errors, check the console output for specific error messages.

## Contributing

Contributions to improve the converter are welcome. Please feel free to submit pull requests or open issues for any bugs or enhancements.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Acknowledgements

This tool uses the [STB image library](https://github.com/nothings/stb) for image processing.

---

<p align="center">
  Made with ❤️ for Dreamcast developers
</p>
