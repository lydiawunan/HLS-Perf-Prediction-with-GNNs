#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 360381350
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(float p, int p_15, int p_17, unsigned short p_19,
                long p_21[5][1])
{
  char v_25;
  char v_23;
  double v_13;
  signed char v_11;
  unsigned char v_9;
  double v_6;
  signed char v_4;
  char v;
  signed char result;
  v_25 = (char)16;
  v_23 = (char)17;
  v_11 = (signed char)p_21[0][0];
  v_9 = (unsigned char)p_19;
  result = (signed char)92;
  if (((unsigned long)p_17 * ((unsigned long)v_9 ^ 4294914317UL)) / (
      ((unsigned long)v_25 + 3561641928UL) * (unsigned long)(~ result) + 593UL) == (unsigned long)p_19) {
    v = (char)(~ (~ 257064169));
    v_6 = (double)((int)((signed char)((p / ((float)v + 751.f)) * -2.98451783378e+38f)) - (int)v_11);
    v_4 = (signed char)(- v_6 * -504089948.434 + (double)(- (p + (float)v_9)));
  }
  else {
    v_13 = (double)v_23;
    v = (char)((long)(32406 / ((int)p_19 + 535)) + p_21[0][0]);
    v_4 = (signed char)(v_13 - (double)(p_15 % (p_17 + 653)) * -435040751.541);
  }
  result = (signed char)((int)v * ((int)v_4 >> (((long)v_4 - 669524840L) & 7L)));
  return result;
}


