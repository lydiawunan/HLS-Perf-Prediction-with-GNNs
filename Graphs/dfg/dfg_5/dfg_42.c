//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 741631550
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned char p)
{
  unsigned int v_11;
  unsigned char v_9;
  char v_7;
  short v_4;
  long v;
  unsigned int result;
  v_9 = p;
  v_7 = (char)-101;
  v_11 = (unsigned int)((int)((unsigned char)-325.864257812f) - (int)p);
  v = (long)(((unsigned int)v_9 - ~ ((unsigned int)p % (v_11 + 451U))) * (unsigned int)p);
  v_4 = (short)(- (((double)((unsigned int)p / 4294950764U) * ((double)p + 9868612740.06)) * (double)(
                   24591LL / (long long)((int)v_7 + 649))));
  result = (unsigned int)(! (- v * (long)((int)v_4 / 104)) + (long)(1 << 19));
  return result;
}


