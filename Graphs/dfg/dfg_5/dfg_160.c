//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 600602558
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(float p, short p_9, float p_11[1][3][4], double p_13,
                  unsigned char p_15)
{
  unsigned short v_17;
  unsigned short v_6;
  double v_4;
  short v;
  unsigned char result;
  v_17 = (unsigned short)61712;
  v_6 = (unsigned short)40940;
  v_4 = 2.96504622031e+38;
  v = (short)7110;
  result = p_15;
  v_17 = (unsigned short)((float)(~ (- (! v_17))) + - (2.45956593605e+17f / (
                                                       95.f / (p_11[0][0][2] + 837.f) + 56.f)));
  v = (short)((-63093. + v_4) / (double)(((float)(28751 - (int)p_15) - (
                                          p + (float)v)) + 795.f) + (double)(
              ((float)v_17 + p) / ((float)((int)p_11[0][1][0] - -536744493) + 318.f) - (float)(
              38049ULL * (unsigned long long)(~ result))));
  v_4 = (double)((unsigned int)(- p_13) + 4294959505U);
  result = (unsigned char)((float)(- ((unsigned long long)v % 18446744072901527124ULL) + (unsigned long long)(
                                   (unsigned int)(v_4 * (double)v_6) / 176456966U)) + 
                           -3064.f / ((-7143265280.f / (p + 148.f) + (
                                       (float)p_9 - p_11[0][0][3])) + 515.f));
  return result;
}


