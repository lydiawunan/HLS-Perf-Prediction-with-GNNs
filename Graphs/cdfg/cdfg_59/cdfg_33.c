#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 628159678
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned short p[2][1], signed char p_7[3][5][1],
                       short p_15, signed char p_19, unsigned long p_21[1])
{
  float v_23;
  unsigned char v_17;
  signed char v_13;
  unsigned char v_11;
  signed char v_9;
  signed char v_5;
  double v;
  unsigned long long result;
  v_23 = (float)p_21[0];
  v_11 = (unsigned char)161;
  v_5 = (signed char)p[1][0];
  if (0UL <= ~ p_21[0] / (unsigned long)((int)((signed char)(v_23 - -35.f)) / (
                                         (int)p_7[1][3][0] + 83) + 508)) {
    v_9 = (signed char)(((int)v_11 / (((int)p[1][0] + (int)p_7[0][4][0]) + 186)) * (int)p_7[2][3][0]);
    v = (double)(- v_9);
    v_5 = (signed char)(~ (((int)p[0][0] - (int)p_7[1][2][0]) + 38604));
  }
  else {
    v_17 = (unsigned char)p_19;
    v_13 = (signed char)(! (((int)p_15 + (int)v_17) + (-74 - (int)p_19)));
    v = (double)((unsigned long)((int)(- p_7[2][2][0]) << ((int)v_13 & 7)) * 1918066326UL);
  }
  result = (unsigned long long)(- (((unsigned long)p[1][0] + 3374518754UL) * (unsigned long)(
                                   (int)((signed char)v) * (int)v_5)));
  return result;
}


