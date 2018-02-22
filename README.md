# Capstone-IoT-Hack-Prevention-Software-Systems
This repo contains basic code used to hack into mid-level IoT and 433mHz devices  as well as source code for software that can prevent such hacks from executing.
<!DOCTYPE html>
<html>

<head>
    <style media="screen" type="text/css">
    /*********** Global Section **********/

* {
    margin: 0;
    padding: 0;
}

body {
    font-family: 'Roboto', sans-serif;
    font-size: 18px;
    font-weight: 400;
    line-height: 1.25;
}


/*********** Navbar Section Start ***********/

.navbar-inverse {
    background-image: linear-gradient( to right top, rgba(119, 21, 116, 0.8), rgba(34, 139, 34, 0.8));
}

.navbar-inverse .navbar-nav>li>a {
    color: white;
    font-size: 15px;
    text-transform: uppercase;
}

.navbar-inverse .navbar-brand {
    color: white;
    font-size: 30px;
}

.navbar-inverse ul li:hover {
    background: rgba(57, 36, 194, 0.8);
    color: white;
}


/************ Navbar Section End *************/


/************ Header Section Start ************/

.header {
    height: 95vh;
    background-image: linear-gradient( to right bottom, rgba(63, 10, 161, 0.8), rgba(139, 0, 0, 0.8)), url(https://images.unsplash.com/photo-1499615767948-e6a89ef6060f?auto=format&fit=crop&w=1050&q=80);
    background-size: cover;
    background-position: top;
    position: relative;
}

.text-box {
    position: absolute;
    top: 50%;
    left: 50%;
    transform: translate(-50%, -50%);
    text-align: center;
}

.heading-primary {
    color: #fff;
    text-transform: uppercase;
    backface-visibility: hidden;
    margin-bottom: 60px;
}

.heading-primary-main {
    display: block;
    font-size: 45px;
    font-weight: 400;
    letter-spacing: 8px;
    animation-name: moveInLeft;
    animation-duration: 1s;
    animation-timing-function: ease-out;
}

.heading-primary-sub {
    display: block;
    font-size: 20px;
    font-weight: 700;
    letter-spacing: 1px;
    padding-top: 20px;
    animation: moveInRight 1s ease-out;
}

@keyframes moveInLeft {
    0% {
        opacity: 0;
        transform: translateX(-100px);
    }
    80% {
        transform: translateX(10px);
    }
    100% {
        opacity: 1;
        transform: translate(0);
    }
}

@keyframes moveInRight {
    0% {
        opacity: 0;
        transform: translateX(100px);
    }
    80% {
        transform: translateX(-10px);
    }
    100% {
        opacity: 1;
        transform: translate(0);
    }
}

@keyframes moveInBottom {
    0% {
        opacity: 0;
        transform: translateY(30px);
    }
    100% {
        opacity: 1;
        transform: translate(0);
    }
}


/************** Header Section End **********/


/*********** About Me Section Start ********/

#about {
    padding-top: 40px;
    padding-bottom: 40px;
    color: #5a5a5a;
    background-image: linear-gradient( to left top, rgba(63, 10, 161, 0.8), rgba(139, 0, 0, 0.8)), url(https://images.unsplash.com/photo-1467703834117-04386e3dadd8?ixlib=rb-0.3.5&ixid=eyJhcHBfaWQiOjEyMDd9&s=2de85761d45711c4109ba4f215b6e21e&auto=format&fit=crop&w=1350&q=80);
    background-size: cover;
    background-position: center;
    color: #fff;
}

.featurette-heading {
    font-weight: 300;
    line-height: 1;
    letter-spacing: -1px;
}

@media (min-width: 768px) {
    .featurette-heading {
        font-size: 30px;
    }
}

@media (min-width: 992px) {
    .featurette-heading {
        margin-top: 120px;
    }
}

.img-responsive {
    border-radius: 100px;
    max-width: 100%;
    height: auto;
    display: block;
}


/*********** About Me Section End **********/


/******** My Portfolio Section Start *******/

#portfolio {
    background-image: linear-gradient( to left bottom, rgba(54, 10, 136, 0.8), rgba(139, 0, 0, 0.8)), url(https://images.unsplash.com/photo-1497892597262-2983614aa886?ixlib=rb-0.3.5&ixid=eyJhcHBfaWQiOjEyMDd9&s=2051e3b8338218a0f163b9a6ab48bb84&auto=format&fit=crop&w=1350&q=80);
    background-size: cover;
    background-position: top;
    color: #fff;
    padding-top: 150px;
    padding-bottom: 100px;
    position: relative;
}

.project {
    transition: transform .3s;
}

.project:hover {
    transform: scale(1.1);
}


/********* My Portfolio Section End ********/


/********* Footer Section Start ************/

footer #footer-above {
    background-image: linear-gradient( to left top, rgba(63, 10, 161, 0.8), rgba(139, 0, 0, 0.8)), url(https://images.unsplash.com/photo-1495277493816-4c359911b7f1?ixlib=rb-0.3.5&ixid=eyJhcHBfaWQiOjEyMDd9&s=cea505d70dc1770c4dd470ff9715ac36&auto=format&fit=crop&w=1346&q=80);
    background-size: cover;
    background-position: center;
    color: #fff;
    position: relative;
    display: -webkit-box;
    display: -moz-flexbox;
    display: -ms-flexbox;
    display: flex;
    -ms-flex-flow: row wrap;
    -webkit-box-orient: horizontal;
    -webkit-box-direction: normal;
    flex-flow: row wrap;
    -ms-flex-pack: distribute;
    justify-content: space-around;
    -webkit-box-align: start;
    -ms-flex-align: start;
    align-items: flex-start;
    margin: 0 auto;
    width: 100%;
}

footer h3 {
    margin-bottom: 30px;
    color: #000;
    font-size: 2em;
}

#footer-above {
    padding-top: 50px;
    width: 80%;
}

#footer-above div {
    margin-bottom: 50px;
    width: 250px;
    text-align: center;
}

#footer-above ul {
    padding: 0;
}

#footer-above li {
    display: inline;
}

#footer-below {
    color: #fff;
    font-size: 1.0em;
    padding: 25px 0;
    background-color: #000;
    background-position: center;
    text-align: center;
}

.button {
    color: #fff;
    border: solid 2px #000;
    border-radius: 70%;
    display: inline-block;
    width: 50px;
    height: 50px;
    text-align: center;
    font-size: 20px;
    line-height: 48px;
    -webkit-transitional: all .3s ease-in-out;
    transition: all .3s ease-in-out;
}

.button:hover {
    border: solid 2px rgb(21, 102, 214);
    color: #2998E4;
}

.col-sm-6,
.col-xs-12 {
    position: relative;
    min-height: 1px;
    padding-right: 15px;
    padding-left: 15px;
}

.col-xs-12 {
    float: left;
    width: 100%;
}

@media (min-width: 768px) {
    .col-sm-6 {
        float: left;
    }
}


/********* Footer Section End **************/
</style>
    <title>MyPortfolio</title>
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <link href="https://fonts.googleapis.com/css?family=Roboto:400,700" rel="stylesheet">
    <link rel="stylesheet" type="text/css" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap.min.css">
    <link rel="stylesheet" type="text/css" href="https://maxcdn.bootstrapcdn.com/font-awesome/4.7.0/css/font-awesome.min.css">
    <link href="https://cdnjs.cloudflare.com/ajax/libs/normalize/6.0.0/normalize.min.css" rel="stylesheet" type="text/css">
    <link rel="stylesheet" type="text/css" href="portfolio.css">
</head>

<body>
    <!-- Navbar Section Start-->
    <nav class="navbar navbar-inverse navbar-fixed-top">
        <div class="container">
            <div class="navbar-header">
                <button type="button" class="navbar-toggle collapsed" data-toggle="collapse" data-target="#bs-example-navbar-collapse-1" aria-expanded="false">
                    <span class="sr-only">Toggle navigation</span>
                    <span class="icon-bar"></span>
                    <span class="icon-bar"></span>
                    <span class="icon-bar"></span>
                </button>
                <a class="navbar-brand active" href="#">Gabriel Machel</a>
            </div>
            <div class="collapse navbar-collapse" id="bs-example-navbar-collapse-1">
                <ul class="nav navbar-nav navbar-right">
                    <li><a href="#about">About</a></li>
                    <li><a href="#portfolio">Portfolio</a></li>
                    <li><a href="#contact">Contact</a></li>
                </ul>
            </div>
        </div>
    </nav>
    <!-- Navbar Section End -->
    <!-- Header Section Start -->
    <header class="header">
        <div class="text-box">
            <h1 class="heading-primary">
                <span class="heading-primary-main">Gabriel Machel</span>
                <span class="heading-primary-sub">Web Developer ~ UI/UX Designer</span>
            </h1>
        </div>
    </header>
    <!-- Header Section End -->
    <!-- About Me Section Start -->
    <div id="about">
        <div class="container">
            <div class="row featurette">
                <div class="col-md-7">
                    <h2 class="featurette-heading">Hi, am Gabriel Machel Odhiambo. <span class="text-muted">A Web Developer.</span></h2>
                    <p class="lead">Through coding i've acquired problem-solving skills and a way to communicate with others on a technical level. I'd love to work in a tech company, with artists, athletes, photographers, non-profits, and small businesses to improve
                        their Web presence.
                    </p>
                    <blockquote>
                        <p>Content is like water. You put water into a cup it becomes <strong>the cup</strong>. <br>You put water into a bottle it becomes <strong>the bottle</strong>. <br>You put it in a teapot, it becomes <strong>the teapot</strong>.<br><em>~ Bruce Lee</em>
                        </p>
                    </blockquote>

                </div>
                <div class="col-md-5">
                    <img class="featurette-image img-responsive center-block" src="https://lh3.googleusercontent.com/FBOHsCxHHsfQX2KaLG9e5bkQN41uJV0tzJCTfGwVlDEKOJQSiRFd_EmA6MUOwVFpuvPazD5WZ1Q0scAkf3839p2sCRwVAWyqdT3_816HB-p6h9fMUahEUv94OVbQQaMoFap0nX-YK1_PybQeI2T5KRsITgxh0FYnFSZWRf9o9E1HgrpkdVIUkkHwT96woMIvvEXsXfq-ilKAFPhOiPb8DT6QUfzLorzKLZSOuv-pm7PoJX09TdPbfNi2FwtiXH_p6OfGBiRqzS5z51Y6v8tufIywagkAzNHcy0CMLf1TrX7T_b5_BCQeQhK6D6rnNdqdw1wm8-Kc86AbOPiXKtqkFIbJACuu14uHif_jC61ASoTxFb8EBsxyjA6yqEhRUCox43zVyB7es-v7E8etBCZLfzpDI6UZU7NDJ1DNb0VvNa-LrNIonsuYPRFvdIiB4OfFliOc2AuMfkwf7WEvYL19ev8wlVwT5jqtuA5_2o2wAmKlkxUBnuLEKm9a4C9jI1OIuSyGsi36oCcTPJMCu6SNe-sr-8vzsMsmfelxqJlXOHK8VTeTDo1UZWHtZyxDpbS816YEWvJ0KESJpkHjFEO1HauZ70jLEgAisM_ArA=w590-h786-no"
                        alt="machel's smiling photo">
                </div>
            </div>
        </div>
    </div>
    <!-- About Me Section End -->
    <!-- My Portfolio Section Start -->
    <div id="portfolio">
        <div class="container">
            <div class="row">
                <div class="col-lg-4 col-sm-6">
                    <div class="project thumbnail">
                        <a href="https://codepen.io/Chell0/full/rGaXzO/" target="_blank" title="Tribute page">
                            <img src="https://images.unsplash.com/photo-1457518919282-b199744eefd6?auto=format&fit=crop&w=1052&q=80&ixid=dW5zcGxhc2guY29tOzs7Ozs%3D">
                        </a>
                    </div>
                </div>
                <div class="col-lg-4 col-sm-6">
                    <div class="project thumbnail ">
                        <a href="https://thimbleprojects.org/ch3ll0h/385389" target="_blank" title="Startup Landing Page">
                            <img src="https://images.unsplash.com/photo-1477414348463-c0eb7f1359b6?auto=format&fit=crop&w=1050&q=80&ixid=dW5zcGxhc2guY29tOzs7Ozs%3D">
                        </a>
                    </div>
                </div>
                <div class="col-lg-4 col-sm-6">
                    <div class="project thumbnail ">
                        <a href="https://thimbleprojects.org/ch3ll0h/385804" target="_blank" title="Photo Blog">
                            <img src="https://images.unsplash.com/photo-1489900464632-5f5907edda24?auto=format&fit=crop&w=1050&q=80&ixid=dW5zcGxhc2guY29tOzs7Ozs%3D">
                        </a>
                    </div>
                </div>
                <div class="col-lg-4 col-sm-6">
                    <div class="project thumbnail">
                        <a href="https://codepen.io/Chell0/full/XVyoqa/" target="_blank" title="Website Template">
                            <img src="https://images.unsplash.com/photo-1507031774658-589130daf90c?auto=format&fit=crop&w=1050&q=80&ixid=dW5zcGxhc2guY29tOzs7Ozs%3D">
                        </a>
                    </div>
                </div>
                <div class="col-lg-4 col-sm-6">
                    <div class="project thumbnail">
                        <a href="https://codepen.io/Chell0/full/WXPoBN/" target="_blank" title="Blog">
                            <img src="https://images.unsplash.com/photo-1502477639450-ccb7a6e7c391?auto=format&fit=crop&w=1050&q=80&ixid=dW5zcGxhc2guY29tOzs7Ozs%3D">
                        </a>
                    </div>
                </div>
                <div class="col-lg-4 col-sm-6">
                    <div class="project thumbnail ">
                        <a href="https://codepen.io/Chell0/full/vpqWMq/" target="_blank" title="TicTacToe Board">
                            <img src="https://images.unsplash.com/photo-1470165525439-3cf9e6dccbad?auto=format&fit=crop&w=1049&q=80&ixid=dW5zcGxhc2guY29tOzs7Ozs%3D">
                        </a>
                    </div>
                </div>

            </div>
        </div>
    </div>
    <!-- My Portfolio Section End -->

    <!-- Footer Section Start -->
    <footer>
        <div id="footer-above">
            <div>
                <h3>Find me on</h3>
                <ul id="contact">
                    <li><a class="button social" href="https://linkedin.com/in/gabriel-machel-odhiambo" target="_blank"><i class="fa fa-fw fa-linkedin"></i></a></li>
                    <li><a class="button social" href="https://github.com/chell0" target="_blank"><i class="fa fa-fw fa-github"></i></a></li>
                    <li><a class="button social" href="https://twitter.com/ch3ll0h" target="_blank"><i class="fa fa-fw fa-twitter"></i></a></li>
                    <li><a class="button social" href="https://www.facebook.com/Gabriel-Machel-173627976468666/" target="_blank"><i class="fa fa-facebook-official"></i></a></li>
                </ul>
            </div>
        </div>
        <div id="footer-below">Copyright &copy;
            <script>
                document.write(new Date().getFullYear())
            </script> Gabriel Machel.
        </div>
    </footer>
    <!-- Footer Section End -->
    <script type="text/javascript" src="https://code.jquery.com/jquery-3.3.1.min.js"></script>
    <script type="text/javascript" src="https://maxcdn.bootstrapcdn.com/bootstrap/4.0.0/js/bootstrap.min.js"></script>
</body>

</html>
