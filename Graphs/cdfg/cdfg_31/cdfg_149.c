#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 785582621
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(int p, char p_4, float p_7[1][2][5], unsigned long long p_11,
                float p_13)
{
  short v_19;
  unsigned char v_17;
  char v_15;
  char v_9;
  unsigned int v;
  signed char result;
  v_19 = (short)p;
  v_15 = (char)p_11;
  if ((int)v_19 > 0) {
    v_9 = (char)(- (! -42));
    v = ((unsigned int)v_9 * ((unsigned int)v_15 * 4294922327U)) / (unsigned int)(
        ~ (p << ((int)p_7[0][1][1] & 31)) + 500);
    v_9 = (char)((p_11 * 16709ULL) / ((unsigned long long)(-18678.f * p_13) + 315ULL) - (unsigned long long)(! (
                 (long)p ^ -63365L)));
  }
  else {
    v_17 = (unsigned char)((unsigned long long)(- (41732UL + (unsigned long)p)) * - (- p_11));
    v = (unsigned int)(! (! (~ v_17)));
    v_9 = (char)(((unsigned long long)p_4 - (78633219ULL ^ (unsigned long long)p_13)) / (
                 (unsigned long long)p_7[0][1][4] + 887ULL));
  }
  if (p_7[0][0][3] / 240253488.f != (float)(v + (unsigned int)(968 | (int)v_9))) 
    result = (signed char)(-125126480 >> (~ p & 31));
  else {
    v = (unsigned int)(- 3569269138.53);
    result = (signed char)((unsigned int)p_4 + - (v * 4294918425U));
  }
  return result;
}


