//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 846342494
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned char p, signed char p_7, unsigned int p_13)
{
  unsigned short v_15;
  signed char v_11;
  double v_9;
  float v_5;
  unsigned short v;
  int result;
  v_15 = (unsigned short)p;
  v_11 = (signed char)44;
  v_5 = (float)v_15;
  v_9 = (double)(char)-56;
  v = (unsigned short)(((unsigned long)((unsigned int)((int)p % ((int)((unsigned char)v_5) + 818)) * (
                                        53586U / (unsigned int)((int)p_7 + 532))) + 
                        (unsigned long)((int)((signed char)v_9) & (int)v_11) * 29634UL) / (unsigned long)(
                       ~ p_13 % (unsigned int)(~ (44244 | (int)p_7) + 178) + 960U));
  result = (int)v;
  return result;
}


