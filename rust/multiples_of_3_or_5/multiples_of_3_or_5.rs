fn main() {
    println!("{}", solution(10));
    println!("{}", solution(11));
    println!("{}", solution(33));
}

fn solution(num: i32) -> i32 {

    if num < 0 { 0 }
    else {
        let n        = num -  1;
        let threes   = n   /  3;
        let fives    = n   /  5;
        let fifteens = n   / 15;

        return 3 * (threes   * (threes   + 1) / 2)
            +  5 * (fives    * (fives    + 1) / 2)
            - 15 * (fifteens * (fifteens + 1) / 2)
    }

}
