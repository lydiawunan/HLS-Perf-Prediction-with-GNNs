//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 488435320
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(char p, char p_5, short p_7, signed char p_15)
{
  char v_25;
  unsigned short v_23;
  long long v_21;
  long v_19;
  long v_17;
  unsigned long long v_13;
  unsigned char v_11;
  long long v_9;
  long long v;
  double result;
  v_25 = (char)-112;
  v_23 = (unsigned short)58625;
  v_21 = (long long)p;
  v_17 = (long)p_5;
  v_13 = 18446744073338966568ULL;
  v_11 = (unsigned char)p_15;
  v_19 = (long)(v_21 % (long long)((int)p_7 + 315) + (long long)((unsigned int)(! (
                                                                 (int)v_23 / (
                                                                 (int)p_15 + 833))) / (
                                                                 70411U / (unsigned int)(
                                                                 ((int)v_25 >> 3UL) + 924) + 529U)));
  v_9 = (long long)((! (~ v_13) >> (-403 / ((int)p_7 * (int)p_15 + 964) & 63)) % (unsigned long long)(
                    ((unsigned long)(~ v_17) & (unsigned long)(- (~ v_19))) + 854UL));
  v = ~ (- (~ v_9 ^ (long long)((int)((unsigned char)2.51734923972e+38f) % (
                                (int)v_11 + 573))));
  result = (double)((unsigned long long)(! ((long long)(220 / ((int)p + 791)) % (
                                            (v - (long long)p_5) + 2LL))) + ! (
                    (unsigned long long)((long long)p_7 + v) / 833ULL));
  return result;
}


