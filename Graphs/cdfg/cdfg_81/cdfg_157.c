#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 90333490
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(int p, signed char p_7, long long p_9, unsigned long long p_11,
              signed char p_15)
{
  unsigned long long v_25;
  char v_23;
  signed char v_21;
  unsigned int v_19;
  unsigned short v_17;
  short v_13;
  unsigned int v_5;
  unsigned long v;
  long long result;
  v_25 = 815013083ULL;
  v_23 = (char)88;
  v_21 = (signed char)p;
  v_19 = (unsigned int)p;
  v_17 = (unsigned short)p_15;
  v_13 = (short)p_7;
  result = -979302835LL;
  while (p_9 * (long long)(~ ((int)v_23 + 40480)) < (long long)((int)(! v_21) * (int)p_15 & -26)) {
    v_17 = v_25 / 8920496128ULL;
    v_25 = 0ULL;
    result = (long long)((p / (((int)p_7 - 20686) + 269)) / ((int)v_21 + 857));
    v_23 = (char)(((unsigned long long)((long long)p / (p_9 + 529LL)) + (
                   18446744073709540236ULL & (unsigned long long)v_19)) - 
                  594082625ULL % (p_11 + 294ULL));
  }
  while_0_break: ;
  if ((unsigned long long)((long long)((unsigned int)((int)p_15 & (int)v_17) * (
                                       (unsigned int)p_15 * v_19)) * (
                           (result + -4057LL) % 177658LL)) > (unsigned long long)p_15 + (
                                                             (p_11 - (unsigned long long)v_21) + (unsigned long long)(! p_7))) 
    result = (long long)((long)p / -24840L);
  else {
    v_5 = (unsigned int)(((unsigned long long)p_9 / (p_11 + 655ULL) << (
                          (-55862 >> ((int)v_13 & 31)) & 63)) * 44ULL);
    v = (unsigned long)(- v_5);
    result = (long long)(- (- v) - (unsigned long)((v_5 / 12226U) % (unsigned int)(
                                                   (int)p_7 + 733)));
  }
  return result;
}


