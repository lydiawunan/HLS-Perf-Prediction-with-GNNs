#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 946337766
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(long p[1][1][1], int p_9, long long p_13, double p_19,
                       unsigned long long p_21)
{
  long long v_25;
  unsigned short v_23;
  unsigned char v_17;
  unsigned short v_15;
  unsigned short v_11;
  short v_7;
  char v_5;
  unsigned short v;
  unsigned long long result;
  v_25 = p_13;
  v_23 = (unsigned short)51412;
  v_17 = (unsigned char)244;
  v_15 = (unsigned short)15587;
  v_11 = (unsigned short)10999;
  v_7 = (short)13200;
  v_5 = (char)-33;
  v = (unsigned short)p_9;
  result = p_21;
  if ((result % (unsigned long long)((int)v_15 + 852)) / (p_21 * 18446744072977743038ULL + 282ULL) - result <= (unsigned long long)(
      (v_25 / (long long)((int)v + 293) + (long long)v_5) % (p_13 + 368LL))) {
    result = (unsigned long long)((double)(158 - (int)(~ v_5)) / (((double)(~ v_7) - 
                                                                   (double)p_9 / (
                                                                   p_19 + 5.)) + 327.));
    v_5 = (char)(- ((result + (unsigned long long)p[0][0][0]) - (unsigned long long)v_23));
    v_17 = (unsigned char)(! v_11);
  }
  else {
    v_7 = (short)(- (~ (~ v_5)));
    v_11 = (unsigned short)p_9;
    v_5 = (char)v_7;
  }
  if ((long long)v_17 - (long long)(59 + (int)((signed char)p_19)) % (
                        (p_13 << (p_21 & 63ULL)) + 737LL) < -4660LL) {
    v_7 = (short)(1.67625809727e+38f - (float)(~ (! p[0][0][0])));
    v = (unsigned short)((long long)(-115 * (int)v_5) * (848297720LL * (long long)v_7 + (long long)p_9));
    result = (unsigned long long)(- (p[0][0][0] / 162L - (long)(101 + (int)v)));
  }
  else {
    v_15 = v_11;
    v_11 = (unsigned short)((float)(p_13 % (long long)((int)v_15 + 229)) * -333.724975586f + 0.f);
    result = (unsigned long long)v_11;
  }
  return result;
}


