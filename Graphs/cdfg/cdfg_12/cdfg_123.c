#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 448235366
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(int p, short p_4, char p_7, unsigned char p_15[3],
          unsigned long p_21)
{
  int v_27;
  short v_25;
  double v_23;
  unsigned char v_19;
  unsigned long long v_17;
  long long v_13;
  unsigned char v_11;
  signed char v_9;
  double v;
  short result;
  v_25 = (short)2410;
  v_23 = (double)p_15[2];
  v_19 = (unsigned char)p_4;
  v_17 = (unsigned long long)p_21;
  v_13 = 918455874LL;
  v_11 = (unsigned char)35;
  v_9 = (signed char)p;
  v = (double)p_15[0];
  result = (short)-10364;
  if ((long long)(! p_4) == (long long)((int)p_4 | (21738 ^ (int)v_19)) % (
                            (3LL + (long long)result % -2488LL) + 351LL)) {
    v_27 = (int)(~ p_4) / (p % ((int)p_15[1] + 956) + 934) + ((int)v_19 / (
                                                              p + 644) & (
                                                              (int)((unsigned short)v_23) + 37808));
    v_25 = (short)(~ ((int)result / ((int)result + 219)) + ((int)(~ p_4) & 
                                                            (int)p_15[1] % (
                                                            (int)p_4 + 439)));
    v_23 = (double)(((long long)((int)v_19 * (int)p_7) + -202092710LL % (
                                                         v_13 + 152LL)) + v_13);
  }
  else {
    v_27 = (int)((unsigned int)p_15[0] * 952227958U);
    v_13 = (long long)(3830281127UL & (p_21 + 770399141UL)) % (((long long)(
                                                                -981313225L / (long)(
                                                                (int)v_25 + 645)) ^ (
                                                                (long long)p_7 + -49708LL)) + 227LL);
    v_11 = (unsigned char)((unsigned long)((double)(p | 74) * v_23) % (
                           p_21 + 305UL));
  }
  if ((((int)((short)((double)p_15[1] / (v_23 + 516.))) + (int)(- v_25)) | ~ (
       (int)v_9 * (int)p_15[1])) > (int)((double)(-4099160832.f / ((float)(
                                                                   14364036LL / (
                                                                   v_13 + 812LL)) + 836.f)) - (
                                         (v - (double)v_27) - (double)p_4))) {
    v = (double)((unsigned long long)((long long)v_11 / (! v_13 + 146LL)) % (
                 ((unsigned long long)((int)p_15[0] / ((int)v_9 + 352)) ^ - v_17) + 289ULL));
    v = (double)(((int)((char)v) / ((int)p_7 + 939) - (int)(! v_9)) - (int)p_4);
    result = (short)((p % ((int)p_4 + 687) | ((int)((signed char)v) + -72)) / (
                     (int)-1.65441424637e+38f + 689));
  }
  else {
    v_19 = (unsigned char)(18446744073709138179ULL % (unsigned long long)(
                           p + 815));
    result = (short)(- ((unsigned long long)((unsigned long)v_19 % (p_21 + 239UL)) | 42232414590ULL));
  }
  return result;
}


