#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 265622215
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(long p, unsigned short p_5[2][5][2], short p_7, float p_13,
                 long long p_21)
{
  int v_23;
  float v_19;
  unsigned long v_17;
  unsigned long v_15;
  unsigned char v_11;
  unsigned int v_9;
  unsigned long v;
  unsigned int result;
  v_23 = -22825;
  v_19 = -308.148406982f;
  v_17 = (unsigned long)p_7;
  v_15 = (unsigned long)p;
  v_11 = (unsigned char)p_5[0][2][0];
  v_9 = (unsigned int)p_13;
  v = (unsigned long)p_7;
  result = 3687271882U;
  while ((long long)(((unsigned long)(p / -634642362L) * (v_15 / ((unsigned long)-7453039616.f + 675UL))) / 228UL) < 
         (long long)((unsigned long)(-640.431986061 / (double)(p_13 + 441.f)) - 
                     4294967239UL % (v + 100UL)) + ((long long)((int)((short)v_19) ^ (int)p_7) + ! p_21)) {
    v_23 -= 112;
    v_17 = (unsigned long)((double)((long long)(4294967238U / (result + 448U)) + 23193LL) / (
                           ((double)p_13 + (2.44013075963 + (double)p_13)) + 397.));
    v_19 = (float)v_9;
    v_15 = (unsigned long)((unsigned long long)(! p_7) - ~ ((unsigned long long)p_21 * 437541895ULL));
  }
  while_0_break: ;
  if ((unsigned long)(- (- (-380297280.f + p_13))) == ((v_15 % 4294929226UL) / (
                                                       (12483UL + v_17) + 133UL)) % (unsigned long)(
                                                      result + 794U)) 
    result = (unsigned int)p;
  else {
    v_9 = (unsigned int)(~ ((int)v_11 * 2579));
    v = (unsigned long)(! ((unsigned int)p_5[1][0][0] * ((unsigned int)p_7 * v_9)));
    result = (unsigned int)v;
  }
  return result;
}


