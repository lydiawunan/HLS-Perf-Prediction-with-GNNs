#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 929134323
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(long p, signed char p_4, unsigned long long p_7,
          signed char p_9[1][3], unsigned int p_11[3][4])
{
  unsigned char v_19;
  unsigned long v_17;
  unsigned short v_15;
  unsigned long long v_13;
  unsigned long long v;
  short result;
  v_19 = (unsigned char)77;
  v_17 = (unsigned long)p;
  v_15 = (unsigned short)p_4;
  v_13 = 18446744073006943384ULL;
  v = 739036615ULL;
  result = (short)p_4;
  while (! (~ v_13) + (unsigned long long)((unsigned int)v_15 % 3746336583U) % (
                      (unsigned long long)p_9[0][0] / (p_7 + 738ULL) + 694ULL) > v) {
    v_15 = (double)v_19 * 2.00139894476e+38;
    v_17 = (unsigned long)(! -786844207);
    v = 179ULL;
    v_13 = (unsigned long long)(- (48L ^ p));
  }
  while_0_break: ;
  if (- ((int)p_4 * -78263800) < (int)((float)p_4 - (float)(4294959952UL / (
                                                            v_17 + 287UL)) * -270.479003906f)) 
    result = (short)-26884;
  else {
    v_13 = v - (unsigned long long)(- (~ v_15));
    v = (unsigned long long)(! p_9[0][1]) / (((unsigned long long)((unsigned long)p_11[1][0] * (unsigned long)p) + 
                                              v_13 % (unsigned long long)(
                                              (int)result + 299)) + 805ULL);
    result = (short)(0ULL ^ ((unsigned long long)(p % (long)((int)p_4 + 730)) ^ 
                             v / (p_7 + 943ULL)));
  }
  return result;
}


