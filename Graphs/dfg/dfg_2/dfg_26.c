//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 842439510
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(char p, long p_7, unsigned int p_11)
{
  char v_9;
  unsigned int v_4;
  short v;
  char result;
  v_9 = (char)p_11;
  v_4 = 4294931457U;
  v = (short)24466;
  v = (short)((unsigned long)(((p_7 / (p_7 + 44L)) / (long)(((int)v_9 + 21377) + 159)) % (long)(
                              (int)v + 211)) * (unsigned long)p_11);
  v = ~ v;
  result = (char)(! (signed char)-56);
  result = (char)((long long)(((unsigned int)result + (unsigned int)v * v_4) >> (
                              (int)p & 31)) * (806755124LL & (long long)p_7));
  return result;
}


