#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 106755448
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned long long p, unsigned char p_4, short p_6, short p_8,
              unsigned long long p_15)
{
  unsigned short v_21;
  unsigned long long v_19;
  unsigned long v_17;
  long v_13;
  long v_11;
  char v;
  long long result;
  v_21 = (unsigned short)p_4;
  v_19 = (unsigned long long)p_4;
  v_11 = -12197L;
  v = (char)-88;
  result = -53440LL;
  v_17 = (unsigned long)(~ v_19);
  if (v_19 != ((unsigned long long)((long long)(-1015393607L - v_11) - (
                                    result << (v_17 & 63UL))) | (unsigned long long)(- v_21) * 17135810ULL)) {
    result = (long long)p_6;
    result = (long long)((18446744073709551543ULL ^ (p - 18446744073031690926ULL)) | (unsigned long long)(- (
                         (long long)p_4 + result)));
  }
  else {
    v_13 = (long)(v_17 + (unsigned long)(~ (- p_6)));
    v_11 = - (v_13 % 35L);
    result = (long long)((unsigned long long)((long)p_8 - (long)v / (
                                                          v_11 + 267L)) + ! (
                         (unsigned long long)v_13 % (p_15 + 534ULL)));
  }
  return result;
}


