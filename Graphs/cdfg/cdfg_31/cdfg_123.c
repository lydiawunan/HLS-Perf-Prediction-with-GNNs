#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 261604142
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned long long p, float p_4, unsigned long long p_6,
        unsigned int p_8, signed char p_17)
{
  double v_27;
  unsigned short v_25;
  unsigned long v_23;
  signed char v_21;
  char v_19;
  short v_15;
  long v_13;
  long v_11;
  int v;
  int result;
  v_27 = (double)p;
  v_25 = (unsigned short)p_17;
  v_23 = 496167975UL;
  v_21 = (signed char)p_8;
  v_19 = (char)62;
  v_15 = (short)p_17;
  v_13 = (long)p;
  v_11 = (long)p_4;
  v = -3442;
  result = -812212388;
  while (0UL != (unsigned long)(~ (-3 + (int)((char)468.524597168f))) % (
                (unsigned long)v_19 % ((458436723UL & (unsigned long)p_17) + 74UL) + 508UL)) {
    v_15 = v_27 / ((double)((int)v_25 >> 4L) + 844.);
    v_27 = (double)(! ((unsigned long)(v_13 & (long)result) - v_23 / 36029UL));
    result = (int)p_17 * result;
    v_19 = (char)(p_6 ^ (unsigned long long)(- p_17));
  }
  while_0_break: ;
  while (! (((unsigned long long)p_4 / (p_6 + 139ULL)) % (unsigned long long)(
            (unsigned long)p_8 / 14195UL + 368UL)) < (unsigned long long)(~ v)) {
    v_23 = (unsigned long long)v_15 & (unsigned long long)v_13 % ((unsigned long long)v_11 % 55557ULL + 395ULL);
    v_13 = (long)(((unsigned long)v_21 - - v_23) + (unsigned long)p_17);
    v_11 = (long)(6132360.13952 - (double)(p | (unsigned long long)((unsigned int)v_19 * p_8)));
    v = (int)p_17;
  }
  while_0_break_0: ;
  return result;
}


