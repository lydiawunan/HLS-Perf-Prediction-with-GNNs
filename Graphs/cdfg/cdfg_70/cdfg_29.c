#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1045439010
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(void)
{
  double v_14;
  double v_12;
  unsigned short v_10;
  double v_8;
  unsigned int v_6;
  short v_4;
  unsigned int v;
  unsigned char result;
  v_14 = -514.597658039;
  v_12 = -9.77891991616e+37;
  v_10 = (unsigned short)5287;
  v_8 = -245922781.19;
  v_6 = 42846U;
  v_4 = (short)5617;
  v = 60645U;
  result = (unsigned char)v_14;
  while (! ((unsigned long)((long)-5016256893.67 % 568332565L) * (unsigned long)(
            v | 4294954966U)) >= 4294966775UL * (unsigned long)((unsigned int)v_4 / (
                                                                v_6 + 966U)) - (unsigned long)(- (
                                 v_8 / (v_8 + 119.)))) {
    v_6 = (unsigned int)(- v_12 - -2805.);
    v_12 = (double)(((int)v_10 + 97 / ((int)((char)v_14) + 460)) + (int)(
                    v_8 - (double)(-30267 % ((int)((short)2.5847702003e+38f) + 474))));
    v_4 = (short)27630;
  }
  while_0_break: ;
  return result;
}


