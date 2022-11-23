fn main() {
    // let array: [i64; 9] = [0, 1, 2, 73, 75, -1, 494128441, 1907144695, 99000649];
    let array: [i64; 6] = [0, 1, 2, 73, 75, -1];

    for x in array {
        if is_prime(x) {
            println!("{} is prime!", x);
        } else {
            println!("{} is not prime!", x);
        }
    }
}

fn is_prime(x: i64) -> bool {
    if x == 2 || x == 3 {
        return true;
    };
    if x < 2 || x % 2 == 0 || x % 3 == 0 {
        return false;
    };
    for i in 6..(x as f64).sqrt() as i64 + 1 {
        if x % (i - 1) == 0 || x % (i + 1) == 0 {
            return false;
        }
    }
    true
}
