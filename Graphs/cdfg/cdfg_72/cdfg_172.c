#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 308859417
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(char p, unsigned int p_5[1][2], unsigned int p_7, long long p_11,
           long p_13)
{
  unsigned char v_33;
  unsigned char v_31;
  unsigned long v_29;
  long long v_27;
  unsigned long long v_25;
  unsigned short v_23;
  char v_21;
  unsigned char v_19;
  long long v_17;
  unsigned long v_15;
  signed char v_9;
  unsigned int v;
  double result;
  v_33 = (unsigned char)112;
  v_31 = (unsigned char)p;
  v_29 = (unsigned long)p_5[0][0];
  v_25 = (unsigned long long)p_5[0][1];
  v_21 = (char)p_11;
  v_19 = (unsigned char)16;
  v_17 = -62364LL;
  v_9 = (signed char)p_11;
  result = -2.19156334935e+38;
  if (0 == (int)((char)(- (- (result + -307071941.))))) {
    v_27 = (long long)(((unsigned long)(~ p_5[0][0]) * - v_29) % (unsigned long)(
                       ((unsigned int)p & p_7 / 31U) + 805U));
    v_9 = (signed char)(~ ((long long)v_19 ^ v_27) + (! p_11 + 31140LL));
    v_23 = (unsigned short)((unsigned long long)(! p_11 % (long long)(
                                                 (int)p + 468)) ^ (unsigned long long)(! p_5[0][1]) % (
                                                                  (v_25 & (unsigned long long)result) + 35ULL));
  }
  else {
    v_23 = (unsigned short)(! p_5[0][0]);
    v_25 = (unsigned long long)v_33;
    v_21 = (char)((unsigned long long)(26302 >> (p_5[0][1] & 15U)) * (
                  19203606ULL ^ v_25) + (unsigned long long)(((int)v_31 | (int)p) % (
                                                             (int)v_23 + 799)));
  }
  if ((unsigned int)v_23 < (18371U & p_5[0][1]) + - p_5[0][1] % ((p_5[0][0] | (unsigned int)p) + 9U)) {
    v_15 = (unsigned long)((long)(~ p) ^ (~ p_13 & (long)(-513.205566406f + (float)p_11)));
    v = (unsigned int)(! ((long long)v_9 - p_11) | ((long long)p_13 + (
                                                    -50529280LL - (long long)v_15)));
    result = (double)((! v / ((unsigned int)p * p_5[0][0] + 279U)) * (
                      (p_7 + 870077318U) % (55120U / (p_7 + 876U) + 888U)));
  }
  else {
    v = (unsigned int)(((unsigned long long)((int)p % ((int)v_21 + 974)) - 18446744073709547223ULL) + (unsigned long long)(
                       (float)(- p_13) / (((float)p_7 + -915.617370605f) + 666.f)));
    v_19 = (unsigned char)(! ((unsigned long)p_13 * (unsigned long)p_5[0][1]));
    result = (double)(((long long)(-345667118 - (int)p) | v_17 % (long long)(
                                                          v + 479U)) - (long long)(
                      (unsigned int)(- v_19) % (~ p_5[0][0] + 253U)));
  }
  return result;
}


