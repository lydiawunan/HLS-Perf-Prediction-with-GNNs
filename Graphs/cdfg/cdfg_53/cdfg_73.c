#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 620385263
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(int p, unsigned long long p_5, unsigned int p_7[3],
                   float p_11, char p_13)
{
  short v_23;
  float v_21;
  signed char v_19;
  long long v_17;
  double v_15;
  int v_9;
  unsigned long long v;
  unsigned short result;
  v_23 = (short)p_11;
  v_21 = (float)p_5;
  v_19 = (signed char)p_13;
  v_17 = 25858LL;
  v_15 = (double)p_13;
  v_9 = -26740;
  v = 6113ULL;
  if ((int)(! p_13) % ((int)p_13 % (p + 137) + 854) - (int)(! p_13) <= v_9) {
    v_19 = (signed char)(p_5 << ((unsigned long long)(- v_21 * 2946157312.f) & 63ULL));
    v_15 = (double)((unsigned long long)(- (! p_13)) - (v - 67ULL) % (
                                                       (p_5 - 26502ULL) + 445ULL));
    v_21 = (float)((unsigned int)(-29320 + (int)((short)1330097024.f)) + ! p_7[2]) + v_21;
  }
  else {
    result = (unsigned short)(-3902788764UL);
    v_23 = (short)((unsigned long long)(! ((unsigned long)result + 203430873UL)) * ! (
                   11739ULL * p_5));
    v_19 = (signed char)(p_5 + (unsigned long long)(-14335LL % (v_17 % (long long)(
                                                                (int)v_19 + 462) + 278LL)));
  }
  if ((v_17 * (long long)((int)v_19 - (int)v_19) ^ (long long)((double)(~ p_13) / (
                                                               (double)v_21 * 2.34784869253e+38 + 215.))) >= (long long)(
      p >> ((v + (unsigned long long)(56185 & (int)v_23)) & 31ULL))) {
    result = (unsigned short)(p_5 * ((p_5 * (unsigned long long)p_7[1]) / (unsigned long long)(
                                     46815LL % (long long)(v_9 + 2) + 158LL)));
    v = 397871272ULL;
    result = (unsigned short)(- ((18446744073709551596ULL * v) * (unsigned long long)(
                                 p * (int)result)));
  }
  else {
    v_9 = (int)((36224.f + p_11) + (float)(v_9 + -18127));
    v_15 = (double)((826324032 - (55 + v_9)) / ((int)((double)(- p_11) / (
                                                      - v_15 + 1015.)) + 843));
    result = (unsigned short)((int)((float)(23890UL >> ((unsigned long)p_11 & 31UL)) + 89.137588501f) - ! (
                              (int)p_13 - (int)((char)v_15)));
  }
  return result;
}


