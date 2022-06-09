* {
    margin: 0;
    padding: 0;
    box-sizing: border-box;
  }

body {
    /* more on this crazy alphanumerical value in a minute! */
    color:#39a6b2;
    font-family: Helvetica, Arial, sans-serif;
  }

  /* apply styles to <header> */

  header {
    padding: 20px 35px;
    background-color: #e4dccd;
    flex-wrap: wrap;
    z-index: 9999;
  }

  /* Applies 20px to every side (top, right, bottom, left) */
 header {
    padding: 20px;
    flex-wrap: wrap;
    z-index: 9999;
  }
 
  /* Applies 20px to the top and bottom, then 35px to the left and right */
  header {
    padding: 20px 35px;
    flex-wrap: wrap;
    z-index: 9999;
  }
 
  /* Applies 10px to the top, 15px to the right, 20px to the bottom, 25px to the left (in that specific clockwise order) */
  header {
    padding: 10px 15px 20px 25px;
    flex-wrap: wrap;
    z-index: 9999;
  }
 
  /* Explicitly list the side it should be applied to*/
  header {
    padding-top: 10px;
    padding-right: 15px;
    padding-bottom: 20px;
    padding-left: 25px;
    flex-wrap: wrap;
    position: -webkit-sticky;
    position: sticky;
    top: 0;
    z-index: 9999;
  }

  header h1 {
    width: 100%;
    text-align: center;
    font-weight: bold;
    margin: 0;
    font-size: 36px;
    color: #38dbfc;
    text-shadow: 0 0 10px rgba(0, 0, 0, 0.5);
  }
  
  header a {
    text-decoration: none;
    color: #38b4fc;
  }

  header nav {
    margin: 7px 0;
    float: right;
    display: flex;
  }

  header nav ul li {
    margin-top: 20px;
    width: 100%;
    justify-content: center;
    display:inline;
    align-items: center;
    list-style: none;
  }

  header nav ul li a:hover{
    background: #ac84bd;
    color: #024e02;
    border-radius: 15px;
    padding: 10px 15px;
    font-weight: lighter;
    font-size: 20px;
    text-shadow: 0 ;
  }

  .hero-form p {
    margin: 5px 0 15px 0;
  }

  .hero-form h3 {
    font-size: 24px;
    margin: 0;
  }
  
  .hero-form p {
    margin: 5px 0 15px 0;
  }

  .hero-form {
    border: solid 3px #024e76 ;
    background-color: #38befc;
    padding: 20px;
    width: 500px;
    color: #024e76;
    background-color: rgba(255,255,255, 1);
    outline: none;
  }
  
  
  .form-input {
    border: 1px solid #024e76;
    display: block;
    padding: 7px 15px;
    font-size: 16px;
    color: #024e76;
    background-color: rgba(186, 118, 219, 0.75);
    width: 100%;
    margin-bottom: 15px;
  }

  .hero-form label {
    margin: 0 5px;
  }
  
  .hero-form button {
    color: #fce138;
    background-color: #024e76;
    border: none;
    padding: 10px 20px;
    font-size: 16px;
  }
  /* HERO STYLES END */

  .intro {
    text-align: center;
  }

  .intro h2 {
    font-size: 55px;
    color: #024e76;
    margin-bottom: 35px;
    padding: 0 100px 20px 100px;
    border-bottom: 3px solid;
    border-color: #388afc;
  }

  .intro h2 {
    /* add this alongside your other declarations */
    display: inline-block;
  }

  .intro p {
    line-height: 1.7;
    color: #39a6b2;
    width: 80%;
    font-size: 20px;
  }

  .intro p {
    /* add this alongside your other declarations */
    margin: auto;
  }

  .steps {
    text-align: center;
  }

  .steps h2 {
  font-size: 55px;
  color: #024e76;
  margin-bottom: 35px;
  padding: 0 100px 20px 100px;
  border-bottom: 3px solid;
  border-color: #39a6b2;
  }

  .section-title {
    font-size: 48px;
    color: #39a6b2;
    margin-bottom: 35px;
    padding: 0 100px 20px 100px;
    display: inline-block;
    border-bottom: 3px solid;
    width: 80;
  }
  
  .primary-border {
    border-color: #fce138;
  }
  
  .secondary-border {
    border-color: #39a6b2;
  }

  .steps span {
    font-size: 38px;
  }

  @media screen and (max-width: 768px) {
    header {
      padding-bottom: 30px 15px;
      justify-content: center;
    }
  }


  @media screen and (max-width: 768px) {

  section {
    padding: 30px 15px;
  }

  .step h3 {
    flex: 1 100%;
    text-align: center;
  }

  .step-info {
    flex: 2 100%;
    text-align: center;
    justify-content: center;
  }

  .step-img {
    flex: 0 32%;
    margin-right: 0;
    margin-top: 15px;
    margin-bottom: 15px;
  }

  .step-text {
    flex: 100%;  
  }

}

@media screen and (max-width: 575px) {

  .hero-form button {
    width: 100%;
  }

  .section-title {
    width: 95%;
  }

  .intro p {
    width: 100%;
  }

  .trainer {
    flex: 0 100%;
  }

  .contact-info {
    text-align: center;
    box-shadow: 0 0 10px rgba(0, 0, 0, 0.5);
    background-color: #c87bec;
  }

  .contact-info > * {
    flex: 0 100%;
    box-shadow: 0 0 10px rgba(0, 0, 0,0.5);
    background-color: #c87bec;
  }
}
