//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 938292193
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(int p[4][2][4], unsigned char p_4, unsigned short p_6,
                  unsigned long long p_9, long p_15)
{
  short v_17;
  long long v_13;
  double v_11;
  char v;
  unsigned long result;
  v_17 = (short)-8873;
  v_13 = 179670950LL;
  v_11 = (double)(! (~ v_13) * (long long)((p_15 + 57168L) + 154006969L / (long)(
                                                             (int)v_17 + 447)) - (long long)p_6);
  v = (char)((double)p[2][0][0] + v_11);
  result = (unsigned long)(! (- ((unsigned long long)(- p_6) % ((unsigned long long)v / (
                                                                p_9 + 133ULL) + 585ULL))));
  result = (unsigned long)p[1][0][0] & ((result - 14394UL) % 4294939360UL & (unsigned long)(
                                        -146691360L % (long)((int)p_4 + 500) - (long)(! p_4)));
  return result;
}


