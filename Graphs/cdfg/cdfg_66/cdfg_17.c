#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 604603448
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned short p, unsigned int p_13, unsigned long p_15,
          float p_17, unsigned short p_21)
{
  unsigned char v_25;
  unsigned int v_23;
  signed char v_19;
  unsigned int v_11;
  unsigned short v_9;
  long long v_7;
  signed char v_4;
  double v;
  short result;
  v_25 = (unsigned char)76;
  v_23 = 828653123U;
  v_19 = (signed char)-109;
  v_11 = (unsigned int)p_15;
  v_9 = (unsigned short)577;
  v = -1957697321.44;
  while (7052. / (((double)(! v_9) - v) + 762.) < (double)(((unsigned long long)p_21 - 18446744073709540580ULL) % (unsigned long long)(
                                                           (int)(~ p) + 963))) {
    v_19 = (unsigned long long)v_25 + 469335503ULL;
    v = (double)(~ (- p_13));
    v_11 = ! (v_23 / 2U);
    v_9 = (unsigned short)(~ ((int)p_21 / ((int)(- p) + 900)));
  }
  while_0_break: ;
  if ((0 ^ (unsigned long)v_19) < (unsigned long)((double)(~ ((unsigned int)p_21 % (
                                                              v_23 + 849U))) + (
                                                  - v - (double)((int)p_21 + (int)p_21)))) 
    result = (short)23655;
  else {
    v_7 = (long long)((unsigned long)(~ ((int)v_9 * (int)v_9)) * ! ((unsigned long)v_11 % 3449234178UL));
    v_4 = (signed char)v_7;
    result = (short)(-2623929L % ((long)(v / ((double)v_4 + 939.)) + 982L) & (long)p);
  }
  return result;
}


