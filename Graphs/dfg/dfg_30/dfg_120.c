#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 531640393
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(short p, float p_13, unsigned long p_15, signed char p_17)
{
  short v_11;
  unsigned int v_8;
  unsigned char v_6;
  short v_4;
  long long v;
  int result;
  v_8 = 944565864U;
  v_6 = (unsigned char)p_13;
  v_4 = (short)-27581;
  v = (long long)p_17;
  result = -37154;
  v_11 = (short)p_15;
  v_11 = (short)(((unsigned long)(- ((float)result * p_13)) / ((unsigned long)(
                                                               (long)p_13 * 803227604L) * p_15 + 380UL)) * (unsigned long)(
                 ((float)(24033 ^ result) - 2.91094927484e+38f) + (float)(! (
                 (int)p_17 % ((int)v_11 + 408)))));
  v = (long long)(- (! (! v_8))) / (((long long)((unsigned int)p * 4294931771U - (unsigned int)(
                                                 (int)v_11 * (int)((short)p_13))) & ~ (
                                     v % (long long)(p_15 + 956UL))) + 376LL);
  result = (int)(~ (! (v - 59812LL)) + (long long)(((int)(! v_4) - -15121) % (
                                                   (40497 * (int)((unsigned short)1438476800.f)) * (int)(! v_6) + 346)));
  return result;
}


