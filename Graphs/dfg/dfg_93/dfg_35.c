#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 219475917
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned short p, float p_5, char p_9, float p_11,
                  unsigned char p_13)
{
  int v_17;
  unsigned long v_15;
  unsigned long long v_7;
  unsigned long long v;
  unsigned long result;
  v_17 = -12274;
  v_15 = (unsigned long)p_11;
  v_7 = (unsigned long long)p;
  v = (unsigned long long)(((int)p_13 * ! ((int)p % 25817)) * ((int)(! (! p)) - ~ (
                                                               157 ^ (int)p)));
  result = (unsigned long)((18446744073709537046ULL & (v & (unsigned long long)p_13)) / (unsigned long long)(
                           -26363 * v_17 + 367) & (unsigned long long)(~ (- (
                           409134430UL / (unsigned long)(v_17 + 146)))));
  v = ((unsigned long long)p_11 | (unsigned long long)(4294919924UL ^ v_15) % 18638ULL) + (unsigned long long)(
      (int)((float)((unsigned long)p_5 ^ v_15) / ((p_11 - -24239.f) + 245.f)) * (
      0 - ((int)p_9 & (int)p_13)));
  result = (unsigned long)((unsigned long long)((float)(151ULL / (36746ULL % (
                                                                  v + 782ULL) + 634ULL)) / (
                                                - ((float)p / (p_5 + 834.f)) + 395.f)) % (
                           ((v_7 - (unsigned long long)p_9) - (unsigned long long)(
                            714.020507812f - p_11)) / (unsigned long long)(
                           (- result - (unsigned long)p_13) + 778UL) + 965ULL));
  return result;
}


