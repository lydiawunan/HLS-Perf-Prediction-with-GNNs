#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 675349671
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(char p, unsigned short p_4, short p_7, unsigned short p_11,
         double p_15)
{
  long long v_21;
  short v_19;
  short v_17;
  float v_13;
  long v_9;
  long long v;
  char result;
  v_21 = -51023LL;
  v_19 = (short)-19274;
  v_17 = (short)-21363;
  v = -185418226LL;
  v_9 = (long)p_4;
  if (((long long)p_4 * v + (long long)(-718321218L / (long)((int)v_19 + 345))) - 27954LL == 192LL) {
    v = (long long)((double)((int)p ^ (int)((char)907.434451205)) * 7638289590.79);
    result = (char)((long long)((int)(! p) >> ((int)p_4 & 7)) & - v);
  }
  else {
    v_13 = (float)((long long)((int)((short)p_15) - (int)v_17) / (((long long)(- v_19) - - v_21) + 276LL));
    v = (long long)(- (- v_13 + (float)(-12170L - v_9)));
    result = (char)(- ((long long)p_7 - v) - (long long)(v_9 * 38423L + (long)p_11));
  }
  return result;
}


