#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 835726012
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned long long p, unsigned long p_9, int p_15, char p_17,
         unsigned int p_19)
{
  float v_25;
  unsigned char v_23;
  unsigned short v_21;
  long long v_13;
  unsigned long long v_11;
  unsigned short v_7;
  unsigned short v_5;
  signed char v;
  long result;
  v_25 = (float)p;
  v_23 = (unsigned char)p;
  v_21 = (unsigned short)38410;
  v_13 = (long long)p_17;
  v_5 = (unsigned short)p;
  v = (signed char)-110;
  v_7 = (unsigned short)((unsigned long long)((unsigned int)(! p_17) ^ ~ (- p_19)) % (
                         (unsigned long long)(((long)v_21 / -5806L) % (long)(
                                              (int)v_23 + 697)) % ((p ^ (unsigned long long)(
                                                                    (long long)v_25 + v_13)) + 861ULL) + 736ULL));
  v_11 = (unsigned long long)(-13527L + (long)v_7);
  v_7 = (unsigned short)((((unsigned long long)p_9 + v_11) ^ (unsigned long long)(~ v) / (
                                                             (37654ULL << (
                                                              v_13 & 63LL)) + 96ULL)) - ~ (
                         p - (unsigned long long)p_15 % (p + 545ULL)));
  result = (long)(p / ((18446744073320942748ULL + (unsigned long long)v) % (unsigned long long)(
                       (int)(- v_5) * (int)v_7 + 961) + 205ULL));
  return result;
}


