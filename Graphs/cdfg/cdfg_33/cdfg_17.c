#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 93027393
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(float p, long p_11, unsigned long long p_13, unsigned long p_15,
         double p_19[5])
{
  int v_17;
  char v_9;
  short v_7;
  short v_4;
  double v;
  long result;
  v_17 = (int)p_13;
  v_9 = (char)p_13;
  v_7 = (short)-17716;
  v_4 = (short)p_11;
  v = 644.622154266;
  v_7 = (short)((int)(- (~ v_7)) >> ((int)((short)(-972.655700684 + - v)) & 15));
  if ((int)((double)v_17 / (- (p_19[0] * 38876.) + 935.)) == ((int)((unsigned char)(
                                                              1984157056. / (
                                                              v + 754.))) * 41) / 61405) {
    result = (long)((unsigned long long)(p / (p / ((float)p_11 + 24.f) + 309.f)) + (
                    18446744072661671758ULL - (unsigned long long)(! v_17)));
    v = (double)((unsigned long long)(result % (long)((int)v_9 + 959) + 
                                      p_11 * p_11) % (((p_13 - (unsigned long long)result) + (unsigned long long)p_15) + 818ULL));
    result = (long)(! ((int)(v / ((double)v_4 + 228.)) / (((int)((short)p) - (int)v_7) + 713)));
  }
  else result = p_11;
  return result;
}


