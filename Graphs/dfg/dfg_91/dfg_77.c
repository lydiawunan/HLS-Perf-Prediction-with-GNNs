#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 411757109
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned char p, double p_7, unsigned char p_11,
                  signed char p_13, signed char p_15)
{
  unsigned long long v_19;
  short v_17;
  unsigned long long v_9;
  unsigned int v_4;
  unsigned int v;
  unsigned long result;
  v_19 = (unsigned long long)p_13;
  v_17 = (short)14990;
  v_9 = 3743ULL;
  v = 3548295624U;
  result = 31905UL;
  v_17 = (short)(~ ((unsigned long long)v_17 % ((v_9 << ((int)p_11 & 63)) + 48ULL)) >> (
                 ~ ((unsigned long long)(result >> (v_19 & 31ULL)) % (
                    v_9 % (v_19 + 61ULL) + 666ULL)) & 63ULL));
  v_9 = (((unsigned long long)((int)p_11 - (int)p_13) ^ 18446744073709527021ULL % (unsigned long long)(
                                                        (int)p_15 + 80)) * - (! v_9)) % (unsigned long long)(
        239 * ~ ((int)((short)-2.39860323598e+38f) % ((int)v_17 + 965)) + 310);
  v_4 = (unsigned int)223.87461853f;
  result = (unsigned long)((unsigned long long)(v + v_4) * ((unsigned long long)(- (- p)) / (
                                                            ((unsigned long long)p_7 * 128056053ULL - (
                                                             446460815ULL - v_9)) + 645ULL)));
  return result;
}


