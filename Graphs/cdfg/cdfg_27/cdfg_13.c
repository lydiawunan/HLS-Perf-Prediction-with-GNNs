#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 851925482
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(long p, unsigned char p_7, long p_9, unsigned int p_11[4],
          unsigned short p_15)
{
  double v_25;
  long v_23;
  int v_21;
  long long v_19;
  unsigned long long v_17;
  signed char v_13;
  long v_4;
  int v;
  short result;
  v_25 = -183.413560084;
  v_23 = p;
  v_21 = (int)p_11[1];
  v_19 = 346050763LL;
  v_17 = (unsigned long long)p_11[3];
  v = (int)p;
  if ((double)(((long long)(! p) ^ (v_19 & (long long)p_9)) + -9882LL) >= - v_25) {
    v_13 = (signed char)((74ULL | (v_17 + (unsigned long long)v)) / (unsigned long long)(
                         - v_19 + 513LL));
    v_4 = (long)(! ((3574399ULL / (unsigned long long)(p_11[3] + 262U)) * (unsigned long long)(
                    (int)v_13 * (int)p_15)));
    v = (int)p_9;
  }
  else {
    v_4 = ~ (~ (12401L - v_23));
    v_17 = (unsigned long long)(- v_21);
    v = (int)(- (- v_17) % 4040867075ULL);
  }
  result = (short)((((long)v - v_4) % (p + 425L)) / ((273331916L + p) * (long)p_7 + 315L));
  return result;
}


