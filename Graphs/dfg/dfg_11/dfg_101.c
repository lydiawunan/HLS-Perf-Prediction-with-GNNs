#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 809954678
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(char p, int p_4[3][3][4], unsigned long p_7,
                  long long p_13, long long p_15)
{
  unsigned long v_17;
  unsigned long long v_11;
  float v_9;
  char v;
  unsigned char result;
  v_17 = (unsigned long)p_15;
  v_9 = (float)p_13;
  v = (char)p_13;
  result = (unsigned char)p_7;
  v_11 = ! (- (((unsigned long long)p_13 ^ 18446744073315063636ULL) | (unsigned long long)(
               p_15 / (long long)(v_17 + 392UL))));
  v_11 = - v_11;
  result = (unsigned char)((unsigned long long)((287579563LL << ((int)result & 63)) / (long long)(
                                                (int)(- result) + 898) ^ (long long)(- (! p_7))) - (
                           (unsigned long long)(1030199934 | (int)(v_9 + v_9)) & (
                           18446744073709528032ULL % (v_11 + 74ULL) - 
                           42ULL * v_11)));
  result = (unsigned char)(~ ((int)((unsigned char)-918143487.635) - (int)result) / (
                           (((int)p - ((int)p >> (p_4[1][1][2] & 7))) + (int)(- v)) + 372));
  return result;
}


