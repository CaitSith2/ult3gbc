/*

 BKG.H

 Include File.

 Info:
  Form                 : All tiles as one unit.
  Format               : Gameboy 4 color.
  Compression          : None.
  Counter              : None.
  Tile size            : 8 x 8
  Tiles                : 0 to 95

  Palette colors       : Included.
  SGB Palette          : None.
  CGB Palette          : 1 Byte per entry.

  Convert to metatiles : No.

 This file was generated by GBTD v1.6

*/


/* Bank of tiles. */
#define bkgBank 0

//#define RGB(r,g,b) ((b<<10) | (g<<5) | (r) )

/* Super Gameboy palette 0 */
#define bkgSGBPal0c0 0
#define bkgSGBPal0c1 0
#define bkgSGBPal0c2 0
#define bkgSGBPal0c3 0

/* Super Gameboy palette 1 */
#define bkgSGBPal1c0 4104
#define bkgSGBPal1c1 6
#define bkgSGBPal1c2 0
#define bkgSGBPal1c3 0

/* Super Gameboy palette 2 */
#define bkgSGBPal2c0 4104
#define bkgSGBPal2c1 6
#define bkgSGBPal2c2 0
#define bkgSGBPal2c3 0

/* Super Gameboy palette 3 */
#define bkgSGBPal3c0 4104
#define bkgSGBPal3c1 6
#define bkgSGBPal3c2 0
#define bkgSGBPal3c3 0

/* Gameboy Color palette 0 */
#define bkgCGBPal0c0 RGB(31UL, 31UL, 31UL)
#define bkgCGBPal0c1 RGB(0UL, 10UL, 28UL)
#define bkgCGBPal0c2 RGB(0UL, 0UL, 31UL)
#define bkgCGBPal0c3 0
//#define bkgCGBPal0c0 RGB(31UL, 31UL, 31UL)
//#define bkgCGBPal0c1 RGB(21UL, 21UL, 21UL)
//#define bkgCGBPal0c2 RGB(11UL, 11UL, 11UL)
//#define bkgCGBPal0c3 0

/* Gameboy Color palette 1 */
#define bkgCGBPal1c0 RGB(0UL, 31UL, 0UL)
#define bkgCGBPal1c1 RGB(0UL, 25UL, 0UL)
#define bkgCGBPal1c2 RGB(0UL, 18UL, 0UL)
#define bkgCGBPal1c3 RGB(0UL,0UL,0UL)

/* Gameboy Color palette 2 */
#define bkgCGBPal2c0 RGB(0UL, 0UL, 31UL)
#define bkgCGBPal2c1 RGB(0UL, 0UL, 25UL)
#define bkgCGBPal2c2 RGB(0UL, 0UL, 18UL)
#define bkgCGBPal2c3 RGB(0UL, 0UL, 0UL)

/* Gameboy Color palette 3 */
#define bkgCGBPal3c0 27648
#define bkgCGBPal3c1 19456
#define bkgCGBPal3c2 11264
#define bkgCGBPal3c3 31

/* Gameboy Color palette 4 */
#define bkgCGBPal4c0 23552
#define bkgCGBPal4c1 17408
#define bkgCGBPal4c2 9216
#define bkgCGBPal4c3 31

/* Gameboy Color palette 5 */
#define bkgCGBPal5c0 16896
#define bkgCGBPal5c1 25344
#define bkgCGBPal5c2 0
#define bkgCGBPal5c3 31

/* Gameboy Color palette 6 */
#define bkgCGBPal6c0 21120
#define bkgCGBPal6c1 29568
#define bkgCGBPal6c2 31744
#define bkgCGBPal6c3 31

/* Gameboy Color palette 7 */
#define bkgCGBPal7c0 32767
#define bkgCGBPal7c1 32736
#define bkgCGBPal7c2 0
#define bkgCGBPal7c3 31744
/* CGBpalette entries. */
extern unsigned char bkgCGB[];
/* Start of tile array. */
extern unsigned char bkg[];

/* End of BKG.H */
