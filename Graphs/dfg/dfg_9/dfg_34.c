//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 877779916
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned long p[2], double p_4, long long p_7, long p_13,
                  long p_15)
{
  unsigned short v_19;
  int v_17;
  unsigned long long v_11;
  unsigned long long v_9;
  short v;
  unsigned long result;
  v_19 = (unsigned short)15416;
  v_17 = (int)p_15;
  v_11 = (unsigned long long)((! p_7 / (long long)(- p[1] + 152UL) & (long long)v_17) * (long long)v_19);
  v = (short)((unsigned long)(p_13 / -45985L) ^ ((unsigned long)(~ p_15 << (
                                                                 4993UL * p[0] & 31UL)) - 
                                                 ((unsigned long)p_4 / (
                                                  p[0] + 878UL)) / ((unsigned long)(
                                                                    (double)v_11 / (
                                                                    p_4 + 350.)) + 208UL)));
  v_9 = v_11 + 18446744073709491863ULL;
  result = (unsigned long)((((unsigned long long)p[0] - ((unsigned long long)p_4 + 18446744073308796489ULL)) + (unsigned long long)(
                            (long long)((int)v + 12) ^ p_7 * 216LL)) * v_9);
  return result;
}


