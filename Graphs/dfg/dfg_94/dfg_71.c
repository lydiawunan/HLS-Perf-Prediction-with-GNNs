#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 771776615
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned int p[1][4], unsigned long long p_9,
                       signed char p_13[3][2][1], unsigned int p_15,
                       int p_21[2])
{
  int v_23;
  char v_19;
  unsigned long long v_17;
  unsigned char v_11;
  unsigned char v_7;
  char v_4;
  unsigned short v;
  unsigned long long result;
  v_23 = 33131;
  v_19 = (char)-73;
  v_17 = (unsigned long long)p_13[0][0][0];
  v_7 = (unsigned char)137;
  v = (unsigned short)p_13[2][0][0];
  v_11 = (unsigned char)((unsigned long long)((int)v_19 * p_21[1] | (int)(~ v_19)) % (
                         (unsigned long long)(v_23 / ((int)v + 473)) % (
                         (18446744073496550870ULL - (unsigned long long)v_23) + 134ULL) + 825ULL) + (unsigned long long)(- (
                         (unsigned int)v_7 * ((unsigned int)p_21[0] + p_15))));
  v_4 = (char)((! p[0][3] / (unsigned int)((int)(~ p_13[0][0][0]) + 52) << (
                ((unsigned long)(! p_15) - 4087464102UL) & 31UL)) >> (
               (v_17 * 18446744072650194291ULL | (unsigned long long)(
                4152893352U * (unsigned int)v_19)) % (unsigned long long)(
               (p_21[0] / (v_23 + 177)) * (int)v_19 + 996) & 31ULL));
  v = (unsigned short)((unsigned long long)(~ ((long long)v_4 % 6987LL)) % (
                       (18446744073709551505ULL + (unsigned long long)(
                                                  p[0][1] - (unsigned int)v_7) * (
                                                  p_9 + (unsigned long long)v_11)) + 289ULL));
  result = (unsigned long long)v;
  return result;
}


