#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1054021186
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned int p, unsigned char p_7,
                       unsigned long long p_11, unsigned short p_15)
{
  short v_27;
  signed char v_25;
  unsigned int v_23;
  float v_21;
  short v_19;
  long long v_17;
  int v_13;
  unsigned int v_9;
  unsigned long long v_5;
  double v;
  unsigned long long result;
  v_27 = (short)-14813;
  v_25 = (signed char)p_7;
  v_19 = (short)-30963;
  v_17 = (long long)p_15;
  v_13 = -5051;
  v_9 = 4294950733U;
  v_5 = 17319ULL;
  v = (double)p_15;
  if ((unsigned long long)p_7 == v_5) {
    result = (unsigned long long)(((int)(- p_15) + (int)p_7) / 2043);
    v_13 = (int)(-(unsigned char)168);
    v_21 = (float)(~ (~ (50532ULL << (p_11 & 63ULL))));
  }
  else {
    v_23 = (unsigned int)((int)((short)((double)v_25 + (3683690829.07 + (double)v_17))) >> (
                          (int)v_27 & 15));
    v_21 = (float)(v_23 / (~ p + 314U));
    result = (unsigned long long)(~ (14942 * (int)((unsigned short)(421499321. + v))));
  }
  while ((unsigned long long)((double)(- p) / ((v - (double)v_5) * (double)(
                                               3499U - p) + 889.)) > 
         (((unsigned long long)p_7 + v_5) - ((unsigned long long)v_9 + p_11)) / (unsigned long long)(
         (int)p_7 + 976)) {
    v_17 = (long long)(- (! p) * (unsigned int)(~ (! v_13)));
    v_13 = (int)p_7;
    v_5 = (unsigned long long)(((long long)p_15 & v_17) / (long long)(
                               (p - (unsigned int)v_19) + 636U)) / ((
                                                                    (
                                                                    p_11 ^ (unsigned long long)p) - (unsigned long long)v_21) + 649ULL);
  }
  while_0_break: ;
  return result;
}


