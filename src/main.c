#include <fxcg/display.h>
#include <fxcg/keyboard.h>

int main() {
  int key;

  // Clear VRAM
  Bdisp_AllClr_VRAM();

  // Print some text!
  // PrintXY uses the first two bytes of the string as meta information
  // For English text, just padding it with two spaces is fine
  PrintXY(4, 3, "  Hello, world!", 0, 0);

  // Add-ins should NOT exit by returning from main, but call GetKey in a loop
  // instead. This mirrors the behavior of included apps as you can exit with
  // the MENU key or power off
  while (1) {
    // GetKey also presents the contents of VRAM to the screen
    GetKey(&key);
  }

  return 0;
}
