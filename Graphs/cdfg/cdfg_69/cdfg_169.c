#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1068105693
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(short p[1][1], float p_4, unsigned char p_9,
                  unsigned char p_15, signed char p_19[2][3])
{
  long v_21;
  float v_17;
  int v_13;
  char v_11;
  long long v_7;
  long long v;
  unsigned char result;
  v_21 = (long)p[0][0];
  v_17 = 813.420776367f;
  v_13 = 35569;
  v_11 = (char)67;
  v_7 = (long long)p_15;
  if ((long long)((int)(- (p_4 / 4294903552.f)) % (187 / ((int)((unsigned char)v_17) + 441) + 15)) == ~ (
      (long long)v_17 * (-717043115LL & (long long)p_19[0][0]))) {
    result = (unsigned char)((int)v_11 - - v_13 / 163);
    result = (unsigned char)((21393 / ((int)result * -496442278 + 589)) % (
                             (int)(- p_4) + 399));
    v = (long long)(! ((unsigned long)((long)result % 239897661L) + (unsigned long)(
                       (unsigned int)p_9 + 400617859U)));
  }
  else {
    v_17 = (float)(((double)v_7 / ((2.34286056397e+38 - (double)p_9) + 809.)) / -3.23757922733e+38);
    v_7 = (long long)((long)((int)v_17 % ((int)p_19[0][2] % 25557 + 278)) % (
                      (v_21 | (long)p_9) / (long)(((int)p_15 - (int)p_9) + 269) + 675L));
    v = 0LL;
  }
  result = (unsigned char)((unsigned long long)(-12481 / ((int)p[0][0] + 139) + (int)(
                                                p_4 + (float)v)) - 18446744070246520852ULL * (unsigned long long)(
                                                                   (long long)p_4 / (
                                                                   v_7 + 351LL)));
  return result;
}


