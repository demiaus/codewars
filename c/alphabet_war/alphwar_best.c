char *alphabet_war(const char *fight)
{
    int score = 0;
    while (*fight) {
        switch (*fight++) {
            case 'w': score -= 4; break;
            case 'p': score -= 3; break;
            case 'b': score -= 2; break;
            case 's': --score; break;
            case 'z': ++score; break;
            case 'd': score += 2; break;
            case 'q': score += 3; break;
            case 'm': score += 4; break;
        }
    }
    return !score ? "Let's fight again!" : score > 0 ? "Right side wins!" : "Left side wins!";
}
